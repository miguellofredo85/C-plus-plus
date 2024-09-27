#include <iostream>
#include <string>



int main(){

    std::string city;

    std::cout<<"Where do you live?\n";

    std::getline(std::cin, city);

    std::cout<<"You live in "<<city;

    return 0;
}