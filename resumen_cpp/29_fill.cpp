#include <iostream>

using namespace std;

int main(){
    const int tam = 120;
    int xs[tam];

    // xs → apunta al inicio del arreglo.
    // xs+120 → apunta al final (una posición después del último elemento).
    // 120 → es el valor con el que se llenan todos los elementos.
    
    fill(xs, xs + tam / 2,10);

    fill(xs+ tam / 2 ,xs + tam,20);
    for(int elem : xs){
        cout << elem << " ";
    }
    return 0;
}