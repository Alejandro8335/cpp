# include <iostream>

using namespace std;
 
int main(){
    int *pnum = NULL;

    pnum = new int;

    *pnum = 25;

    cout << pnum << "\n";
    cout << *pnum << "\n";

    delete pnum;
    return 0;
} 