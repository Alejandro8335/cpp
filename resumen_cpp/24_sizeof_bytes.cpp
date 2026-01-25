#include <iostream>

using namespace std;

int main(){

double x = 2.55;
cout << sizeof(x) << "bytes" << endl;

cout << sizeof(string)<< endl;

int numeros[] = {10,20,30,40,50};
cout << sizeof(numeros) / sizeof(numeros[0]);
return 0;
}