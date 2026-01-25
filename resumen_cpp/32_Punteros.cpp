#include <iostream>

using namespace std;

int main(){
    // & direcion / * desreferencia

    string nombre = "ale";
    string *p_nombre = &nombre;// P al comienzo es convencion

    cout << p_nombre << "\n";
    // para mostrar la variable *
    cout << *p_nombre << "\n";

    int nums[5] = {1,2,3,4,5};

    int *p_nums = nums;// si es un arrays no va el &
    return 0;
}