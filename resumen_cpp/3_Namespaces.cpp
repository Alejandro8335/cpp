#include <iostream>

namespace name
{
    std::string str = "name";
} // namespace name

namespace name_1
{
    std::string str = "name_1";
} // namespace name

int main(){
    std::string str = "main";
    std::cout << str << std::endl;

    std::cout << name::str << std::endl;

    std::cout << name_1::str << std::endl;

    using namespace name;// es como usar local en python 
    // lo que pasa es que str ya existe en el main por lo tanto se va a sobre escribir
    std::cout << str << std::endl;//output main  ↑ ↑

    str = "main";
    std::cout << str << std::endl;
    return 0;
}