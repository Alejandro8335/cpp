#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string,int>> pair_list_t;//convencion _t
typedef std::string str_t;

typedef int entero_t;

using num_t = int;
int main(){
    str_t nombre = "Alejandro";
    std::cout<<nombre<<std::endl;

    entero_t edad = 15;
    std::cout<<edad<<std::endl;

    num_t num = 150;
    std::cout<<num<<std::endl;
    return 0;
}