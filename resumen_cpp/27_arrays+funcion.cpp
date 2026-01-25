#include <iostream>

using namespace std;

void recorrer_array(int int_array[], int size){
    for(int i = 0;i < size;i++){
        cout << int_array[i] << endl;
    }
}

int main(){
    int xs[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(xs) / sizeof(xs[0]);
    recorrer_array(xs,size);
    return 0;
}