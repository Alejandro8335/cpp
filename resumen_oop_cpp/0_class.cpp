#include <iostream>

using namespace std;

class Gato {
    public:
        string nombre = "";// con el = se le asigna un valor por defecto
        int edad;

        void maullido(){
            cout << "miau" << endl;
        }
};

int main(){
    Gato gato;

    gato.nombre = "gato";
    cout << gato.nombre << endl;
    gato.edad = 2;
    cout << gato.edad << endl;

    gato.maullido();

    return 0;
}