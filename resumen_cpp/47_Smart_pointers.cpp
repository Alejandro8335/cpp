#include <memory>
#include <iostream>
#include <vector>

int main() {
    // make_unique → crea un unique_ptr (un solo dueño).

    // make_shared → crea un shared_ptr (varios dueños).

    //=====================================================================================
    // Concepto de unique_ptr
    // Es un smart pointer en C++ que garantiza que solo un dueño controla el objeto en memoria.

    // Cuando el unique_ptr se destruye (sale de alcance), automáticamente libera la memoria del objeto que posee.

    // No se puede copiar (porque eso implicaría tener dos dueños), pero sí se puede mover con std::move.

    // Esto asegura que no haya fugas de memoria ni dobles liberaciones.

    std::unique_ptr<int> p = std::make_unique<int>(42);
    std::cout << *p << std::endl; // imprime 42

    // Transferencia de propiedad con std::move
    std::unique_ptr<int> q = std::move(p);
    // Ahora p ya no tiene el objeto, q es el único dueño

    //=====================================================================================
    // Concepto de shared_ptr
    // Es un smart pointer que permite que varios punteros compartan la propiedad de un mismo objeto.

    // Internamente mantiene un contador de referencias: cada vez que se copia un shared_ptr, el contador aumenta; cuando uno se destruye, el contador disminuye.

    // Cuando el contador llega a cero (es decir, ya no hay ningún shared_ptr apuntando al objeto), la memoria se libera automáticamente.

    // Esto es útil cuando un recurso necesita ser usado por varias partes del programa sin preocuparse de quién lo libera.

    std::shared_ptr<int> p1 = std::make_shared<int>(100);
    std::shared_ptr<int> p2 = p1; // ahora hay dos dueños

    std::cout << *p1 << " y " << *p2 << std::endl; // ambos imprimen 100
    std::cout << "Contador: " << p1.use_count() << std::endl; // muestra 2

    //=====================================================================================
    // Concepto de weak_ptr
    // Es un smart pointer que no es dueño del objeto, solo mantiene una referencia débil.

    // Se usa junto con shared_ptr: apunta al mismo objeto, pero no incrementa el contador de referencias.

    // Sirve para evitar ciclos de referencia que impedirían liberar memoria.

    // Antes de usar el objeto, hay que “convertir” el weak_ptr en un shared_ptr mediante .lock(). Si el objeto ya fue liberado, .lock() devuelve un puntero vacío.

    //=====================================================================================
    // Concepto de weak_ptr
    // Es un smart pointer que no es dueño del objeto, solo mantiene una referencia débil.

    // Se usa junto con shared_ptr: apunta al mismo objeto, pero no incrementa el contador de referencias.

    // Sirve para evitar ciclos de referencia que impedirían liberar memoria.

    // Antes de usar el objeto, hay que “convertir” el weak_ptr en un shared_ptr mediante .lock(). Si el objeto ya fue liberado, .lock() devuelve un puntero vacío.

    std::shared_ptr<int> sp = std::make_shared<int>(200);
    std::weak_ptr<int> wp = sp; // referencia débil

    if (auto temp = wp.lock()) { // intento obtener shared_ptr
        std::cout << *temp << std::endl; // imprime 200
    } else {
        std::cout << "El objeto ya no existe" << std::endl;
    }

    return 0;
}