#include <iostream>

using namespace std;

struct Auto{int durabilidad_ruedas;
            int ano;};

// si necesitas un puntero es la misma sintaxis
void Print_Auto(Auto automovil){
    cout << automovil.durabilidad_ruedas << "\n";
    cout << automovil.ano << "\n";
}

int main(){

    Auto chevrolet;
    chevrolet.durabilidad_ruedas = 100;
    chevrolet.ano = 2026;
    
    Print_Auto(chevrolet);

    return 0;
}