#include <iostream>
using namespace std;

template<typename T> void swap_data(T& a, T& c){
    T temp = a;
    a = c;
    c = temp;
    cout << a << endl;
    cout << c << endl;

}
// template <typename T> const T& maximum(const T& a, const T& b); // Declaration
//template <typename T> T maximum(T a, T b); // Declaration

int main(){

    string e{"Hello"};
    string r{"There"};

     int x{10};
    int y{20};
    swap_data(x,y);
    cout << x << " " << y; 

    // double a {23.5};
    // double b {51.2};

    // std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
    // auto result = maximum(a,b);
    // std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
  
    return 0;
}


// //Definition
// template <typename T> const T& maximum(const T& a, const T& b){
//     std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
//     return (a > b ) ? a : b ;
// }

/*
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;
}
*/

