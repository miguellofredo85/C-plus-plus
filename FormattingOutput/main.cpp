#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <ostream>
#include <bitset>
#include <sstream>


// Input/output manipulators https://en.cppreference.com/w/cpp/io/manip 
int main(){

    int eleven{11};
    int twenty{20};

    // std::cout << std::setfill('-');

    // std::cout << std::setfill('-');
    std::cout << std::right;

    std::cout << "Lastname" << std::setw(eleven)<< "Name" << std::endl;

    std::cout << "Lofredo" << std::setw(twenty) << "Miguel Angel" << std::endl; 

    int positive{121234};
    int negative{-57567};
    double dounum{12.9};

    //doesnt have effect on double

    std::cout << std::uppercase;

    //This is an I/O manipulator, it may be called with an expression such as out << std::showbase for any out of type std::basic_ostream or with an expression such as in >> std::showbase for any in of type std::basic_istream.The showbase flag affects the behavior of integer output (see std::num_put::put), monetary input (see std::money_get::get) and monetary output (see std::money_put::put).
    std::cout << std::showbase;

    std::cout << std::hex << positive << std::endl;
    std::cout << std::hex <<negative << std::endl;
    std::cout << std::hex << dounum << std::endl;

    std::cout << "==============" << std::endl;

    std::cout << std::dec << positive << std::endl;
    std::cout << std::dec << negative << std::endl;
    std::cout << std::dec << dounum << std::endl;

    std::cout << "==============" << std::endl;

    std::cout << std::oct<< positive << std::endl;
    std::cout << std::oct << negative << std::endl;
    std::cout << std::oct << dounum << std::endl;

   
    return 0;
}