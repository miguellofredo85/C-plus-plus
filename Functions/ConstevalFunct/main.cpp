#include <iostream>



consteval int multi(int multiplier){ // evalua q a function seja evaluada at compile time

        return multiplier * 3;
    }

int main(){

    int num1 = multi(4); // evaluada at comp time

   std::cout << "num1: " << num1 << std::endl;

    int num2{9}; // essa var e evaluada in run time entao dara erro ao chamar a funct emvaixo pois ela ao ser consteval sera evaluada at compile time
   std::cout << "num1: " << multi(num2) << std::endl;

return 0;
}
