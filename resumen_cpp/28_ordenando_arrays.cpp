#include <iostream>

using namespace std;

void Ordenar_arrays(int arrays[],int tam){
    int temp;
    for(int i = 0;i < tam-1;i++){
        for(int j = 0;j < tam - i - 1;j++){
            if (arrays[j] > arrays[j+1]){
                int temp = arrays[j];
                arrays[j] = arrays[j+1];
                arrays[j+1] = temp;
            }
        }
    }
}

int main(){
    int xs[] = {3,2,1,5,4,6,8,9,7};
    int tam = sizeof(xs) / sizeof(int);

    Ordenar_arrays(xs,tam);

    for(int elem : xs){
    cout<<elem <<" ";
    }
    return 0;
}