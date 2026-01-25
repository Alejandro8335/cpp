#include <iostream>

int main(){

    double x = (int)1.5;// 1,es como int() en python 
    x += 1.5;
    std::cout<<x<<std::endl;
    
    char y = 100;// d tabla ASCII
    std::cout<<y<<std::endl;

    int preguntas_correctas = 8;
    int totales = 10;

    double porcentaje = preguntas_correctas / totales * 100; // 0 pq 8/10 en int 0.8
    std::cout<<porcentaje<<" %"<<std::endl;

    // forma correcta
    int preguntas_c_1 = 8;
    int totales_1 = 10;

    double porcentaje_1 = (double)preguntas_c_1 / totales_1 * 100;
    std::cout<<porcentaje_1<<" %"<<std::endl;
    return 0;
}