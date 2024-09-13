#include <iostream>
#include <string>
#include <limits>

int main(){

    // numericlimits on cppreferences

   std::cout << "range for short "<< std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

   std::cout << "range for int "<< std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;

   std::cout << "range for dou "<< std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;

   std::cout << "range for float "<< std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;

   std::cout << "range for long "<< std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;

    std::cout << "range for long double"<< std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;


    return 0;
}