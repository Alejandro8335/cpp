#include <iostream>

// cout << = print
// cin >> = input

int main(){
    std::string name;

    std::cout<< "what is your name and last name?"<<std::endl;
    std::getline(std::cin>>std::ws,name);//esto para que lea toda la linea sino corta el str cuando hay un espacio
    // std::ws es para eliminar \n y generar errores o bug 
    // tmb borra todos los espacios en blanco iniciales (espacios, tabs, saltos de línea) antes de leer.

    std:: cout << "hello " <<name <<std::endl;

    std::cout<< "what is your name and last name?"<<std::endl;// el last name se borra 
    std::cin>>name;
    std:: cout << "hello " <<name <<std::endl;

    std::string edad;
    
    std::cout<< "how old are you"<<std::endl;
    std::cin >> edad;
    std:: cout << "your age is "<< edad <<std::endl;
    return 0;
}