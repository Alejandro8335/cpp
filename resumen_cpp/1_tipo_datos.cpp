#include <iostream>
#include <string>

int main() {
	int int_0;//declaracion
	int_0 = 5;//asignacion

	int int_1 = 15;//declaracion y asignacion

	int int_2 = 24.5;// va a guardar el 24
	std::cout <<int_2<< std::endl;

	// std::cout por defecto solo muestra 6 cifras significativas.
	double double_0 = 0.0123456789;//64 bits,aprox 15 decimales 
	std::cout << double_0 << std::endl;

	float float_0 = 0.0123456789;// 32bits,aprox 7 decimales
	std::cout << float_0 << std::endl;

	long double long_double_0 = 0.0123456789;
	std::cout << long_double_0 << std::endl;

    char letra = 'A';//es para un solo caracter(no importa cual)
	// comillas '' para char
	std::cout << letra << std::endl;

	std::string str = "Ale";// comillas "" para str
	std::cout << "hello " << str << std::endl;
	
	bool bool_0 = true;
	return 0;
}