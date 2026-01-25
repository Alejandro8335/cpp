#include <iostream>

using namespace std;

int main(){
    // [] filas / [] columnas (obligatorio aclarar la cantidad)
    int nums[][3]= {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    // nums[0] devuelve el tamaño en bytes de la primera fila
    int f_can = sizeof(nums) / sizeof(nums[0]);
    // sizeof(nums[0][0]) devuelve el tamaño en bytes de un elemento
    int c_can = sizeof(nums[0]) / sizeof(nums[0][0]);
    for(int f = f_can -1;f > -1;f--){
        for(int c = 0;c < c_can;c++){
            cout << nums[f][c] << " ";
        }
        cout << "\n";
    }
    return 0;
}