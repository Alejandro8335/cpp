#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 3;
    double y = 4;
    double k = 3.49;
    double z;
    
    // simpre con 
    // puede funcionar sin  porque también está definido en el espacio global por compatibilidad con C.
    // usa  porque es la forma más correcta y portable, que funciona igual en cualquier compilador.

    z = max(x,y);// devuelve el mayor entre a y b,si necesitas mas elementos max anidandos
    z = max(z,max(x,y));
    cout << z << endl;

    z = min(x,y);
    cout << z << endl; 

    // a es la base y b es el exponente
    z = pow(x,y);//81
    cout << z << endl;

    // rais de 2
    z = sqrt(y);// 2
    cout << z << endl;

    // |a|
    z = abs(-3);// 3
    cout << z << endl;

    // redondea para arriba o para abajo
    z = round(3.14159);
    cout << z << endl;

    // redondea para arriba
    z = ceil(k);
    cout << z << endl;

    // redondea para abajo
    z = floor(k);
    cout << z << endl;
    
    return 0;
}