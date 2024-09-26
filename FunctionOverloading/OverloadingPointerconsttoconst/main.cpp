#include <iostream>
#include <cstring>
#include <string>

double add(double a, double b);

std::string add( std::string& a,std::string& b);

const char* add( char* a, const char* b);


void stitch_them();


// int max(int*a , int* b){
//     std::cout << "max with int* called" << std::endl;
//     return (*a > *b)? *a : *b;
// }

// int max(const int* a, const int* b){
//     std::cout << "max with cont int* called" << std::endl;
//     return (*a > *b)? *a : *b;
// }


// /*
// int min(const int* a, const int* b){
//     return (*a < *b)? *a : *b;
// }
// */


// int min(const int* const a, const int* const b){
// 	std::cout << "&a : " << &a << std::endl;
// 	std::cout << "&b : " << &b << std::endl;
//     return (*a < *b)? *a : *b;
// }







int main(){

    stitch_them();

/*
    int a{10};
	int b{12};

	const int c{30};
	const int d{15};

    auto result = max(&c,&c);
    */

   	// const int c{30};
	// const int d{15};

    // const int* p_c{&c};
    // const int* p_d{&d};

    // std::cout << "&p_c : " << &p_c << std::endl;
    // std::cout << "&p_d : " << &p_d << std::endl;

    // auto result = min(p_c,p_d);


    
    return 0;
}

double add(double a, double b){
    return a + b;
};


const char* add( char* a, const char* b){
    return strcat(a, b);
};

std::string add( std::string& a,std::string& b){
    return a + b;
}
//Your code will go above this line
//Don't modify anything below this line

void stitch_them(){
    char name[20] {"The sky"};
    auto result_str  = add (name," is blue");
    std::cout << "result_str : " <<  result_str;
}