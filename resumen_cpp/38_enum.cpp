#include <iostream>

using namespace std;

enum dias {lunes = 0, martes = 1, miercoles = 2, jueves = 3, viernes = 4, sabado = 5, domingo = 6};

int main(){
    dias hoy = jueves;

    switch (hoy){
        case lunes:cout << "lunes" << "\n";
            break;
        case martes:cout << "martes" <<"\n";
            break;
        case miercoles:cout << "miercoles" <<"\n";
            break;
        case jueves:cout << "jueves" <<"\n";
            break;
        case viernes:cout << "viernes" <<"\n";
            break;
        case sabado:cout << "sabado" <<"\n";
            break;
        case domingo:cout << "domingo" <<"\n";
            break;
    }

    return 0;
}