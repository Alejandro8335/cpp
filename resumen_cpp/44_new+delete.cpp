#include <iostream>

using namespace std;

int main(){
    // ===============================
    // MANEJO DE MEMORIA (new / delete)
    // ===============================

    // En C++ la memoria puede estar en:
    //
    // 1) Stack (automática)
    // 2) Heap (dinámica)

    // -------------------------------
    // STACK (automática)
    // -------------------------------

    int x = 10; 
    // La memoria se crea automáticamente
    // y se destruye cuando la variable sale del scope



    // -------------------------------
    // HEAP (memoria dinámica)
    // -------------------------------
    // Se maneja manualmente con new y delete

    int* p = new int; 
    // new reserva memoria en el heap
    // devuelve la dirección de memoria

    *p = 5;

    cout << *p << endl;



    // -------------------------------
    // LIBERAR MEMORIA
    // -------------------------------

    delete p;
    // libera la memoria reservada con new



    // -------------------------------
    // ARREGLOS DINÁMICOS
    // -------------------------------

    int* arr = new int[5];
    // reserva memoria para 5 enteros

    arr[0] = 10;
    arr[1] = 20;



    delete[] arr;
    // para arrays se usa delete[]



    // -------------------------------
    // PROBLEMA: MEMORY LEAK
    // -------------------------------

    // Si no usas delete → la memoria queda ocupada

    int* a = new int(50);

    // delete a;  ← si no haces esto
    // se produce un MEMORY LEAK

    return 0;
}