// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Please input your name\n>";
    std::cin >> str;
    std::cout << "Hi, ";
    std::cout << str;
    std::cout << std::endl << std::endl;
    return (0);
}
