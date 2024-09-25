#include <iostream>

//constexpr has the potencial to ve evaluated in compile time if the var on parameter is constexpr too

 constexpr int multi(int multiplier){ // constexpr sera evaluada em tempo de compilacao

        return multiplier * 3;
    }

int main(){

constexpr int num1{4}; // tem que ser constexpr pra fazer evaluacao da function acima ser evaluada em tempo de compilacao

   std::cout << "num1: " << multi(num1) << std::endl;

   int num2{9}; // como nao e constexr a funcao e a var num2 serao evaluadas no runtime

   std::cout << "num1: " << multi(num2) << std::endl;

return 0;
}
