#include <iostream>

using namespace std;

// las funciones pueden tener el mismo nombre pero necesitan distintos parametros

// se le pone delante el valor que retorna 
int Cuadrado(int x){
    return x * x;
}
string nombre_completo(string nombre,string apellido){
return "hola " + nombre + " " + apellido;
}
int main(){

    cout << Cuadrado(5) << endl;

    cout << nombre_completo("Alejandro","Dominguez");
    return 0;
}