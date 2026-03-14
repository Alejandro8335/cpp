// ===============================
// NAMESPACES EN C++
// ===============================

// Un namespace sirve para
// organizar código y evitar conflictos de nombres.


// -------------------------------
// PROBLEMA SIN NAMESPACE
// -------------------------------

#include <iostream>

void imprimir() {
    std::cout << "Hola\n";
}

// Si otra librería también tiene
// una función llamada imprimir()
// habría conflicto.


// -------------------------------
// CREAR UN NAMESPACE
// -------------------------------

namespace utilidades {

    void imprimir() {
        std::cout << "Hola desde utilidades\n";
    }

}

namespace A {
    int x = 10;
}

namespace B {
    int x = 20;
}

// -------------------------------
// USAR UN NAMESPACE
// -------------------------------

int main() {

    utilidades::imprimir();

    // using namespace utilidades;
    // imprimir(); // ya no hace falta utilidades::
    // ⚠️ Esto no se recomienda mucho en proyectos grandes porque puede generar conflictos.

    std::cout << A::x << "\n"; // 10
    std::cout << B::x << "\n"; // 20
    return 0;
}