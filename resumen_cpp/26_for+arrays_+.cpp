#include <iostream>

using namespace std;

int main(){
    int xs[] = {10,20,30,40,50,60,70,80,90,100};
    for(int x : xs){
        cout << x << endl;
    }
    return 0;
}