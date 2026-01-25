#include <iostream>

using namespace std;

int main(){

    // valor nulo = None

    // nullptr = palabra que representa que un puntero nulo

    int *puntero = nullptr;
    int x = 123;

    puntero = &x;

    if(puntero != nullptr){
        cout << *puntero;
    }
    return 0;
}