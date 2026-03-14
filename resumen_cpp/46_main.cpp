/*
Headers → .h

Implementación → .cpp

#include normalmente incluye .h

=======================================
Cuando incluís tus archivos:
#include "gato.h"

Cuando incluís bibliotecas:
#include <iostream>

=======================================
g++ 46_main.cpp 46.1_implementacion.cpp -o 46_main
.\46_main
*/

// main.cpp
#include "46.2_gato.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Gato g("Michi", 3);
    g.maullar();
    return 0;
}