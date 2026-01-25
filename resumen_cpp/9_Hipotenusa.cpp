#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double a;
    double b;

    cout<< "How many centimeters long is A?"<<endl;// el last name se borra 
    cin>>a;

    cout<< "How many centimeters long is B?"<<endl;// el last name se borra 
    cin>>b;

    cout<< "Hypotenuse is: "<<sqrt(pow(a,2)+ pow(b,2))<<endl;
    return 0;
}