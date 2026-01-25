#include <iostream>

int main(){
    // const hace que la varible no se pueda canbiar
    const double PI = 3.14159;// convencion const en mayus
    double radio = 10;
    double circunferencia = 2 * PI * radio;
    
    std::cout << circunferencia<<" cm"<< std::endl;
    return 0;
}
