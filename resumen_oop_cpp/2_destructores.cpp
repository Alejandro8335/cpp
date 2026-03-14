#include <iostream>

using namespace std;

// ¿Qué es un destructor?
// Un destructor es un método especial que:

// Tiene el mismo nombre que la clase

// Lleva un ~ adelante

// No recibe parámetros

// No devuelve nada

// Se ejecuta automáticamente cuando el objeto se destruye

class Gato {
private:
    string nombre;
    int edad;

public:
    Gato(string nombre, int edad) : nombre(nombre), edad(edad) {
        cout << "Constructor ejecutado\n";
    }

    ~Gato() {
        cout << "Destructor ejecutado para " << nombre << endl;
    }
};

int main() {
    Gato gato("Michi", 3);
    cout << "Dentro del main\n";
    return 0;
}

// Salida:
// Constructor ejecutado
// Dentro del main
// Destructor ejecutado para Mich


// Gato g1("A",1);
// Gato g2("B",2);
// Gato g3("C",3);

// Se destruyen en orden inverso:
// Destructor C
// Destructor B
// Destructor A