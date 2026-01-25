#include <iostream>
using namespace std;

int main(){
    int edad;
    cout<< "how old are you"<<endl;
    cin >> edad;

    if(edad >= 18){
        cout<<"welcome"<<endl;
    }

    else if (edad >= 16)
    {
        cout<<"Your age is 16 or older"<<endl;
    }
    

    else
    {
        cout<<"Your age is less than 16" <<endl;
    }
    
    return 0;
}