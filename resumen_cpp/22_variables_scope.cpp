#include <iostream>

using namespace std;

int x_global = 2;

int main(){
    int x_global = 1;// esta sobre escribiendo la variable pero no la esta modificando
    cout << x_global << endl;// 1
    cout << ::x_global << endl;// 2
}