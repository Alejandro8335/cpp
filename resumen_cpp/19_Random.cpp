#include <iostream>

using namespace std;

int main(){

    srand(time(NULL));
    // % para el rango pero no tiene nada que ver con la funcion
    int i = rand() % 6;//   del 0 al 5

    cout << i << endl;
    return 0;
}