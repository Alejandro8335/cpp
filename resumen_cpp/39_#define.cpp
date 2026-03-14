#include <iostream>

// Definimos constantes con macros
#define PI 3.14159
#define RADIO 5

int main() {
    // Usamos las macros como si fueran valores
    double area = PI * RADIO * RADIO;

    std::cout << "El área del círculo es: " << area << std::endl;

    return 0;
}
/*
#define PI 3.14159 → cada vez que el compilador ve PI, lo reemplaza por 3.14159.

#define RADIO 5 → lo mismo, reemplaza RADIO por 5.

En este ejemplo, el programa calcula el área de un círculo y lo muestra en pantalla.
*/