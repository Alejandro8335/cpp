#include <iostream>
using namespace std;

int main(){
    int x;
    do{
        cout << "ingrese un numero positivo"<<endl;
        cin >> x ;
    }while (x < 0);
    
    return 0;
}