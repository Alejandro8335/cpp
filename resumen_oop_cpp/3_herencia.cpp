#include <iostream>
using namespace std;

/*
HERENCIA EN C++

Sintaxis:
class Hija : public Padre

public significa que:
los miembros public del padre siguen siendo accesibles
desde la clase hija y desde los objetos.
*/

class Animal {
public:
    bool vivo = true;

    // MÉTODO DEL PADRE
    void respirar() {
        cout << "respirando\n";
    }
};

class Gato : public Animal {   // HERENCIA PUBLIC
public:

    // COMPORTAMIENTO NUEVO DE LA HIJA
    void maullar() {
        cout << "miau\n";
    }
};

int main() {

    Gato gato;

    // ATRIBUTO HEREDADO
    cout << gato.vivo << endl;

    // MÉTODO HEREDADO
    gato.respirar();

    // MÉTODO PROPIO DE LA CLASE HIJA
    gato.maullar();

}

herencia de contructores y destructores