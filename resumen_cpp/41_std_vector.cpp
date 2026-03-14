// std::vector es un contenedor dinámico de C++ que forma parte de la STL (Standard Template Library). 
// Es como un arreglo (array), pero puede cambiar de tamaño automáticamente.

// Características principales

// Dinamico:
// Se puede expandir o reducir mientras el programa corre.

// Acceso por indice:
// Igual que un arreglo: vec[i].

// Almacena elementos contiguos en memoria:
// Esto permite iterar rápido y usar punteros si se necesita.

// Tipos de elementos:
// Puede almacenar casi cualquier tipo de dato
// siempre que el tipo sea copiable o movible.

#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main() {
    vector<int> nums;           // Vector vacío de enteros
    vector<int> nums1(5);           // Vector con 5 enteros inicializados en 0 ([0][0][0][0][0])
    vector<int> nums2(5, 10);      // Vector con 5 enteros inicializados en 10 ([10][10][10][10][10])

    vector<int> numeros;

    // Agregar elementos
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    cout << "Size del vector: " << numeros.size() << "\n"; // 3

    // Acceso a elementos
    for (size_t i = 0; i < numeros.size(); i++) {
        cout << "Elemento " << i << ": " << numeros[i] << "\n"; // 10, 20, 30
    }

    // Eliminar el ultimo
    numeros.pop_back();
    cout << "Despues de pop_back, size: " << numeros.size() << "\n"; // 2

    return 0;
}

// Método  →  Descripción
// push_back(valor)  →  Agrega un elemento al final
// pop_back()  →  Elimina el ultimo elemento
// size()  →  Devuelve la cantidad de elementos
// empty()  →  Devuelve true si está vacío
// clear()  →  Vacía el vector
// at(i)  →  Acceso seguro al elemento i (lanza excepción si sale del rango)
// front()  →  Primer elemento
// back()  →  Último elemento
// insert(pos, valor)  →  Inserta en la posición indicada
// erase(pos)  →  Borra el elemento en la posición indicada
// capacity()  →  Devuelve cuántos elementos puede almacenar el vector sin tener que realocar memoria.

//===============================================================================
// vector<T> funciona con:

// ✔ string
// ✔ clases propias
// ✔ structs
// ✔ punteros
// ✔ smart pointers
// ✔ casi todo

// No funciona con:

// ❌ referencias
// ❌ tipos que no se puedan copiar ni mover

// ¿Qué es copiar?
// Copiar significa crear un objeto nuevo igual al original.
// Ejemplo:

string a = "Hola";
string b = a; // copia

// Eso usa el constructor de copia.

// ¿Qué es mover?
// Mover significa transferir los recursos internos del objeto sin copiar todo.
// Ejemplo simplificado:

string a = "Hola";
string b = std::move(a); // mueve

// Después de eso, a queda vacío (pero válido).
// Eso usa el constructor de movimiento.