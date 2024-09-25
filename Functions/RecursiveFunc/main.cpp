#include <iostream>

// size_t sum_up_to_zero(size_t value){
//     if(value!=0)
//         return value + sum_up_to_zero(value-1);
//     return 0;
// }

unsigned int factorial(unsigned int n){

    if(n > 1){

    n *= (factorial(n-1));
    }

    

    return n;
    
}

int main(){

    // std::cout << "result : " << sum_up_to_zero(10) << std::endl;


   std::cout << factorial(5); 

    return 0;
}