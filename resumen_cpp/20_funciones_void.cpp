#include <iostream>

using namespace std;

// esto es por si queres poner la funcion abajo del main()
void Hola_funcion(string nombre, int x);

int main(){
    Hola_funcion("Ale",5);
    return 0;
}

void Hola_funcion(string nombre, int x){
cout << "hola " << nombre << " ,desde la funcion" << "\ntu num es: " << x <<endl;
}