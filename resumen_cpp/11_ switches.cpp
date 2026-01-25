#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    switch(num){
        case 1:
            cout<<"num is: 1";
            break;
        case 2:
            cout<<"num is: 2";
            break;
        default:
            cout<<"num is: default";// no es necesario el break
    }
    return 0;
}