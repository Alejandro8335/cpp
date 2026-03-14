#include <iostream>

using namespace std;

// Un constructor es un método especial que:
// Tiene el mismo nombre que la clase
// Se ejecuta automáticamente cuando creás el objeto
// Sirve para inicializar los atributos

class Gato {
    public:// por defecto es privada
        string nombre;
        int edad;
        Gato(string nombre,int edad){
            this-> nombre = nombre;// el this es si la variable tiene el mismo nombre
            this-> edad = edad; 
        }
        
        // En C++ moderno es mejor hacer esto:
        // Gato(string nombre, int edad) : nombre(nombre), edad(edad) {}

        void maullido(){
            cout << "miau" << endl;
        }
};

int main(){
    Gato gato("gato",2);

    cout << gato.nombre << endl;
    cout << gato.edad << endl;

    gato.maullido();

    return 0;
}