#include <iostream>

int main(){
    // const indica que el objeto no puede modificarse
    // después de su inicialización.
    const double PI = 3.14159;// convencion const en mayus
    double radio = 10;
    double circunferencia = 2 * PI * radio;
    
    std::cout << circunferencia<<" cm"<< std::endl;

    //===========================================================
    // Puntero a const
    int x = 10;
    const int *p = &x;
    std::cout << *p << std::endl; // 10

    //*p = 20; // error: assignment of read-only location '* p'

    int y = 30;
    p = &y; // ✔ permitido
    std::cout << *p << std::endl; // 30

    //===========================================================
    // Puntero constante
    int _x = 10;
    int *const _p = &_x;
    std::cout << *_p << std::endl; // 10

    int _y = 30;
    // _p = &_y; // error: assignment of read-only variable '_p'

    *_p = 20; // ✔ permitido
    std::cout << *_p << std::endl; // 20

    //===========================================================
    // Ambos constantes

    int _x_ = 15;
    const int *const _p_ = &_x_;
    std::cout << *_p_ << std::endl; // 15
    // 👉 No podés cambiar ni el valor ni la dirección.
    
    //===========================================================
    // Declaración  →  ¿Puedo cambiar valor?  →  ¿Puedo cambiar dirección?
    // const int *p  →  ❌  →  ✔
    // int *const p  →  ✔  →  ❌
    // const int *const p  →  ❌  →  ❌

    //===========================================================
    const int *p2;
    int const *p2_;
    // son lo mismo
    const int *p3 = &x; 
    int const *p3_ = &x;
    // tmb son lo mismo

    // Porque en C++ el const se aplica a lo que está a su izquierda.
    // Si no hay nada a la izquierda, se aplica a lo que está a la derecha.
    // 👉 const califica el tipo inmediatamente adyacente.
    
    // Donde sí importa el orden
    // Acá cambia todo:

    int *const p4 = &x;     // puntero constante a int
    const int *p4_ = &x;     // puntero a int constante

    // Ahi el const está afectando cosas distintas.
    // cambia cuando el pasa el *
    return 0;
}
