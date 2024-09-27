#include <iostream>
using namespace std;


//https://en.cppreference.com/w/cpp/header/type_traits

template<typename T>
 int hunt_down( T i){
    
   static_assert(is_integral_v<T>, "Must pass an integral value"); // _v syntax for not ::value

   return i;
}


int main(){


// int value = hunt_down(4.6); wont compile

int value = hunt_down(8);

cout << "Your integral is : " << value;



return 0;
}


