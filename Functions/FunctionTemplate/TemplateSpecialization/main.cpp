
#include <iostream>
#include <cstring>

// template <typename T> T maximum(T a,T b){
//     return (a > b) ? a : b ; 
// }


// template <>
// const char * maximum<const char*> (const char* a, const char* b){
//     return ( std::strcmp(a,b) > 0) ? a : b;
// }
template<typename T>
int hunt_down( T value,  T* collection, unsigned int size);


template<>
int hunt_down(const char* value,  const char* collection[], unsigned int size);



int main(){

	  unsigned int student_id{ 817616 };
    unsigned int student_ids[]{ 111222,442222,817616,333900 };
    int index{ hunt_down(student_id, student_ids, 4) }; //

    /*
	int a{10};
	int b{23};
	double c{34.7};
	double d{23.4};
	std::string e{"hello"};
	std::string f{"world"};
	
	auto max_int = maximum(a,b); // int type deduced
	auto max_double = maximum(c,d);// double type deduced
	auto max_str = maximum(e,f) ;// string type deduced
	
	std::cout << "max_int : " << max_int << std::endl;
	std::cout << "max_double : " << max_double << std::endl;
	std::cout << "max_str : " << max_str << std::endl;
    */

    //
	// const char* g{"wild"};
	// const char* h{"animal"};
	
	// //This won't do what you would expect : BEWARE!

  //   const char* result = maximum(g,h);
	// std::cout << "max(const char*) : " << result << std::endl;
   
    return 0;
}


template <typename T>
int hunt_down( T value,  T* collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (collection[i] == value) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}


template<>
int hunt_down(const char* value,  const char* collection[], unsigned int size){


	for (unsigned int i{ 0 }; i < size; i++) {
		if (std::strcmp(value, collection[i]) == 0) {
			std::cout << i;
			return i; 
		}
	}

	std::cout << -1;
	return -1; 

}
