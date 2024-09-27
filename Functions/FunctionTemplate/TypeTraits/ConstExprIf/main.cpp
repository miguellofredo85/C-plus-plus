#include <iostream>
#include <type_traits>


void func_floating_point  (double d) {
	std::cout << "func_floating_point called..." << std::endl;
} 
void func_integral(int i) { 
	std::cout << "func_integral called..." << std::endl;
} 

template <typename T>
void func(T t)
{
    if constexpr(std::is_integral_v<T>)
        func_integral(t);
    else if constexpr(std::is_floating_point_v<T>)
        func_floating_point(t);
    else
        static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>,
			"Argument must be integral or floating point");
}


int main(){

    func(12);

    return 0;
}

/*
You are correct, and in fact, we wrote template code for 20 years without every using the if constexpr (it was added in C++17).

It was added for a couple of reasons. The main one in my view, is because some template code is very large and since the code can be generated many times and the if constexpr can really reduce the amount of code that is generated. In the get_value() example there will be 2 separate functions generated for the given main:

auto get_value(int t) {
    return t;
}
 
auto get_value(int* t) {
    return *t;
}
Although in this case the savings in program size is small, if each branch of the if statement is a lot larger or if there were many more branches in the if, you can see that the size saved is a lot larger.

Reducing code like this could mean the difference between the compiler being able to inline the code (completely reducing the function call) or not.

Two things you need to keep in mind when both learning and writing C++ code is that 1) a lot of template coding is done by library writers who have to be more flexible in handing all possible input template parameters and 2) code execution speed is very important and if constexpr can reduce the size of code being generated and thus speed up execution time.
*/