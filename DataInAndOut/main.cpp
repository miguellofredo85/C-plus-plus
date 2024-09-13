#include <iostream>
#include <string>


int main(){

    //Print data

    // std::cout<<"Ola"<<std::endl;

    // int age{20};
    // std::cout<<"Age is :"<< age<<std::endl;

    // std::cerr<<"Error message"<<std::endl;
    // std::clog<<"log message"<<std::endl;

    // int idade;
    // std::string name;

    std::cout<<"Enter name and age"<<std::endl;

    //std::cin>>name;
    //std::cin>>idade;

    // std::cin>>name>>idade;

    // std::cout<<"Ola " << name << " tu edad es " << idade << std::endl;

    //Data with spaces

    std::string full_name;
    int age3;

    std::getline(std::cin,full_name);
    std::cin>>age3;

    std::cout << "Ola " << full_name << " tu edad es " << age3 << std::endl;

    return 0;
}