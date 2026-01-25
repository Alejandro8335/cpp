#include <iostream>

using namespace std;

int main(){

    // son como tuplas ; no existen losn indices negativos
    string automovil[]{"BMW","M3"};
    cout << automovil[1]<<endl;

    int nums[3] = {0};//{0} es para que los indices que todavia no tengan valores tengan el 0
    nums[2] = 3;
    cout << nums[0]<<"\n"<<nums[1]<<"\n"<<nums[2];
    return 0;
}