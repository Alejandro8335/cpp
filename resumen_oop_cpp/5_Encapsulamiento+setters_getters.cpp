#include <iostream>
using namespace std;

/*
ENCAPSULAMIENTO EN C++

Encapsulamiento significa:
ocultar los datos internos de una clase y controlar
su acceso mediante métodos.

Para eso se usan:
private   -> solo la clase puede acceder
public    -> cualquiera puede acceder
*/

class Persona {
private:
    int edad;   // DATO OCULTO

public:

    // MÉTODO PARA MODIFICAR EL DATO
    void setEdad(int e) {
        edad = e;
    }

    // MÉTODO PARA LEER EL DATO
    int getEdad() {
        return edad;
    }
};

int main() {

    Persona p;

    // p.edad = 20;  ❌ no se puede (es private)

    p.setEdad(20);          // modificar dato
    cout << p.getEdad();    // leer dato

}
/*
private
- oculta los datos
- solo la clase puede acceder

public
- permite acceder desde afuera

get -> leer datos
set -> modificar datos

Encapsulamiento = proteger datos internos de la clase
y acceder a ellos mediante métodos.
*/