#include <iostream>

// /*
// template <int threshold,typename T>
// bool is_valid(T collection[] ,size_t size)
// {
//     T sum{};//0
//     for(size_t i{ 0 }; i < size; ++i) {
//         sum += collection[i];
//     }
//     return (sum > threshold) ? true : false;
// }
// */


// //Version making a little more sense for the task
// template <typename T>
// bool is_valid(T collection[], int threshold,size_t size)
// {
// 	T sum{};
// 	for(size_t i{ 0 }; i < size; ++i) {
// 		sum += collection[i];
// 	}
// 	return (sum > threshold) ? true : false;
// }


// //Support for C++20 NTTP is still not fully supported
// //Function below doesn't compile on gcc10 but does on gcc11 with wandbox
// //Wandbox : https://wandbox.org/permlink/FqJzUV00c5MC2ie2
// /*
// template <typename T, double coeff>
// T process (T a, T b){
//     return a*b-coeff;
// }
// */


template<unsigned int size, typename T>

int find_value(T collection[], T value){
    for (unsigned int i = 0; i < size; i++) {
        if(collection[i] == value){
            // std::cout << "index : " << i;

            return i;
             
        }
        }
            // std::cout << "index : -1";
            return -1;
    }

int main(){


    unsigned int ids[] {222333,44556,123555,917666};
    find_value<4,unsigned int>(ids,43534);
	// double temperatures[] {10.0,20.0,30.0,40.0,50.0,100.0};

    // auto result = is_valid<double>(temperatures,200,std::size(temperatures));
    // std::cout << std::boolalpha;
    // std::cout << "result : " << result << std::endl;
   
    return 0;
}