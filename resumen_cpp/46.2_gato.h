// ===============================
// HEADERS Y COMPILACIÓN SEPARADA
// ===============================

// Sirve para dividir el código en varios archivos.
// Así los proyectos grandes son más organizados.


// -------------------------------
// ARCHIVO HEADER (.h)
// -------------------------------

/*
¿Cómo funciona?
#ifndef GATO_H → significa “si NO está definido GATO_H…”.

#define GATO_H → define la macro GATO_H para indicar que ya incluimos este archivo.

#endif → marca el final de la condición.

Entonces, la primera vez que se incluye gato.h, la macro GATO_H no existe → se ejecuta el contenido del archivo y se define GATO_H.
La segunda vez que se intente incluir, como GATO_H ya está definido, el compilador ignora todo el contenido y evita duplicados.
*/

// gato.h

#ifndef GATO_H
#define GATO_H

#include <string>  // Solo lo necesario para la clase

// → Constructor y métodos solo se declaran, no se implementan aquí. Esto es compilación separada real.
class Gato {
public:
    std::string nombre;
    int edad;

    Gato(std::string nombre, int edad);

    void maullar();
};

#endif