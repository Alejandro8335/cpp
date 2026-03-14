#include <iostream>
#include <vector>
using namespace std;

/*
POLIMORFISMO EN C++

Polimorfismo significa:
diferentes clases pueden usar el mismo método
pero con comportamientos distintos.

Se usa:
virtual -> permite redefinir el método en la clase hija
*/

class Animal {
public:
    virtual void hacerSonido() {
        cout << "sonido generico\n";
    }
};

class Gato : public Animal {
public:
    void hacerSonido() {
        cout << "miau\n";
    }
};

class Perro : public Animal {
public:
    void hacerSonido() {
        cout << "guau\n";
    }
};

int main() {
    Gato g;
    g.hacerSonido(); // imprime "miau"
    /*
    Aquí g es un Gato completo en la pila. No hay punteros ni polimorfismo: 
    si lo guardas en una variable de tipo Animal, 
    se produce object slicing (se “corta” la parte de Gato y queda solo la parte Animal).
    */
    Animal a = Gato(); 
    a.hacerSonido(); // imprime "sonido generico"

    cout << "===================================="<< "\n";

    Animal* a1 = new Gato();
    Animal* a2 = new Perro();

    // MISMO MÉTODO
    // DISTINTO COMPORTAMIENTO

    a1->hacerSonido();// Si tenés un puntero, se usa ->
    a2->hacerSonido();

    delete a1, a2;

    /*
    Muy buena pregunta, Alejandro. La idea de “guardar un Gato en un Animal” no es porque queramos perder la identidad del gato, 
    sino porque queremos tratar a distintos animales de manera uniforme.
    */
    cout << "===================================="<< "\n";

    vector<Animal*> zoologico;
    zoologico.push_back(new Gato());
    zoologico.push_back(new Perro());

    for (Animal* a : zoologico) {
        a->hacerSonido(); // cada uno hace su sonido
    }
    /*
    Generalización: Animal es la “interfaz común”.

    Especialización: Gato y Perro implementan su versión concreta de hacerSonido().

    Polimorfismo: cuando llamás a hacerSonido() a través de un puntero/referencia a Animal, el programa decide en tiempo de ejecución cuál versión usar.
    */
    return 0;
}
/*
Animal → clase base

Gato y Perro → clases hijas

mismo método:
hacerSonido()

distinto comportamiento:
Gato  -> miau
Perro -> guau

virtual void hacerSonido()
virtual le dice al compilador:
el método puede ser redefinido en las clases hijas y cuando se llame se ejecutará el del objeto real.

Polimorfismo =
mismo método
distinto comportamiento
según el objeto.
*/