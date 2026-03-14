/*
Concepto de virtual

En C++, la palabra clave virtual se usa en métodos de clases
para habilitar el polimorfismo dinámico.

Significa que cuando llamas a un método a través de un puntero
o referencia a la clase base, se ejecutará la versión del método
de la clase derivada (si fue sobrescrito).

La decisión se toma según el TIPO REAL DEL OBJETO
y no según el tipo del puntero.

Sin virtual:
la llamada se resuelve en tiempo de compilación (early binding).

Con virtual:
la llamada se resuelve en tiempo de ejecución (late binding).
*/

/*
override
Es una palabra clave que se usa en C++11 en adelante.

Sirve para indicar explícitamente que un método en una clase derivada está sobrescribiendo un método virtual de la clase base.

Si por error la firma no coincide (por ejemplo, distinto número de parámetros), el compilador dará error.

Esto evita bugs silenciosos y hace el código más claro.
#include <iostream>
*/

/*
virtual destructor
Cuando una clase tiene métodos virtuales, normalmente también se declara el destructor como virtual.

¿Por qué? Porque si borras un objeto derivado a través de un puntero a la clase base, se debe llamar al destructor correcto (el de la clase derivada).

Si el destructor no es virtual, solo se ejecuta el destructor de la base, lo que puede causar fugas de memoria o liberar recursos de forma incompleta.
*/
#include <iostream>

class Animal {
public:
    virtual void hablar() { // método virtual
        std::cout << "Soy un animal" << std::endl;
    }
    virtual ~Animal() { // destructor virtual
        std::cout << "Destructor de Animal\n";
    }
};

class Perro : public Animal {
public:
    void hablar() override { // asegura que realmente sobrescribe
        std::cout << "Guau!" << std::endl;
    }
    ~Perro() override {
        std::cout << "Destructor de Perro\n";
    }
};

int main() {

    Animal* a = new Perro();

    // el puntero es Animal*
    // pero el objeto real es Perro

    a->hablar();  // imprime: Guau!

    delete a; // llama ~Perro y despues ~Animal
};