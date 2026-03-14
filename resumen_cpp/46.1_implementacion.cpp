#include "46.2_gato.h"
#include <iostream>

Gato::Gato(std::string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

void Gato::maullar() {
    std::cout << "miau\n";
}