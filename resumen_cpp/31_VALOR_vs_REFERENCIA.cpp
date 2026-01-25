#include <iostream>

using namespace std;

// & = id en python y tmb sirve para pasarle la referencia en memoria
void sumar_uno_valor(int x){x++;}

void sumar_uno_referencia(int &x){x++;}

int main(){
    int x = 1;
    sumar_uno_valor(x);
    cout <<"sumar_uno_valor: "<< x << "\n";
    sumar_uno_referencia(x);
    cout <<"sumar_uno_referencia: "<< x << "\n";
    return 0;
}