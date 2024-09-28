#include <iostream>
#include <type_traits>
#include <concepts>
#include <string>

// //Syntax1
// /*
// template <typename T>
// concept MyIntegral = std::is_integral_v<T>;

// MyIntegral auto add( MyIntegral auto a, MyIntegral auto b) {
//     return a + b;
// }
// */


// template <typename T>
// concept Multipliable =  requires(T a, T b) {
// 	a * b; // Just makes sure the syntax is valid
// };


// template <typename T>
// concept Incrementable = requires (T a) {
// 	a+=1;
// 	++a;
// 	a++;
// };

// template <typename T>
// requires Incrementable<T>
// T add (T a, T b){
//     return a + b;
// }



template<typename T>
concept Tostring = requires(T a){
    std::to_string(a);
};

std::string concatenate(Tostring auto a, Tostring auto c){
    return std::to_string(a) + std::to_string(c);
}

int main(){

    int x{65};
    int y{8767};

    // std::string x{"Hello"};
    // std::string y{"World"};
auto result = concatenate(x,y);

std::cout << "result : " << result << std::endl;
    // add(x,y);
    // std::cout << "Done!" << std::endl;
    
    return 0;
}