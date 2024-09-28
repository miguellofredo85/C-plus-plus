#include <iostream>
#include <concepts>


// template <typename T>
// concept TinyType = requires ( T t){
// 	sizeof(T) <=4; // Simple requirement
// 	requires sizeof(T) <= 4; // Nested requirement
// };


// template <typename T>
// //requires std::integral<T> || std::floating_point<T> // OR operator
// //requires std::integral<T> && TinyType<T>
// requires std::integral<T> && requires ( T t){
// 	sizeof(T) <=4; // Simple requirement
// 	requires sizeof(T) <= 4; // Nested requirement
// }
// T add(T a, T b){
//     return a + b;
// }


 
template <typename T>
concept ConvertibleToStdString = requires( T n) {
                                     std::to_string(n);
                                 };
 
template <typename T1, typename T2>
requires ConvertibleToStdString<T1> && ConvertibleToStdString<T2>
 auto concatenate(const T1  n1, const  T2 n2) 
 ->decltype(std::to_string(n1) + std::to_string(n2)) 
{
    return std::to_string(n1) + std::to_string(n2);
}


int main(){

    // long long int x{7};
    // long long int y{5};

    // add(x,y);


 auto result = concatenate(11,22.22);
   std::cout << "result : " << result << std::endl;
   
    return 0;
}