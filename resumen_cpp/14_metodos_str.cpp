#include <iostream>
using namespace std ;

int main(){
    string nombre = "Ale ";
    // len 
    cout << nombre.length()<<endl;// 4

    // retorna true(1) si la cadena esta vacia
    cout << nombre.empty()<<endl;// 0

    // no retorna nada
    nombre.clear();
    cout <<  nombre <<endl;

    // le + al final 
    cout << nombre.append("ALE ") <<endl;

    // nombre[] tmb se puede
    cout << nombre.at(0) <<endl;// A

    // es por indice
    cout << nombre.insert(0,"Hola ALE ") << endl;

    // busca donde empieza la palabra siempre la primera
    cout << nombre.find("ALE") << endl;

    // borra por indice
    cout << nombre.erase(9,-1) << endl;
    return 0;
}