#include <iostream>

using namespace std;

int main(){
    int xs[] = {10,20,30,40,50,60,70,80,90,100};
    for(int i = 0;i < (sizeof(xs) / sizeof(xs[0]));i++){
        cout << xs[i] << endl;
    }
    return 0;
}