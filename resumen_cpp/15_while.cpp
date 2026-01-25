#include <iostream>

using namespace std;

int main(){
    string respuesta = "N";
    while (!(respuesta == "y" || respuesta == "Y") )
    {
        respuesta.clear();
        cout << "Do you want to break out of the loop?(y/n)"<< endl;
        getline(cin>>ws,respuesta);
    }
    
    return 0;
}