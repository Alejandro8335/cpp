# include <iostream>

using namespace std;

struct mix{
    int x;
    double y;
    string z;
};

int main(){
    mix uno;
    uno.x = 5;
    uno.y = 5.55;
    uno.z = "holaaaa";
    cout << "x: " << uno.x << "\n" << "y: " << uno.y << "\n" << "z: " << uno.z;
    return 0;
}