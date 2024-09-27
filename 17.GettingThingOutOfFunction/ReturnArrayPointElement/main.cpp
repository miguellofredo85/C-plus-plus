#include <iostream>


 const double* find_max_address(const double scores[], unsigned int count){

    unsigned int max_index{};
    double max{scores[0]};
    
    for(unsigned int i{0}; i < count ; ++i){
        if(scores[i] > max){
            max = scores[i];
            max_index = i;
        }

    }
    return &scores[max_index];
}

// const double* max_index_array(const double arr[], int sizearr);


// const double* max_index_array(const double arr[], int sizearr){ // funct must const so cant modify arr

// int store_max_i{};
// double max{};

// for (size_t i = 0; i < sizearr; i++){
//     if(arr[i] > max){
//         max = arr[i];
//         store_max_i = i;
//     }
// }
// std::cout << store_max_i << std::endl;
// return &arr[store_max_i]; 

// }

int main(){

// double ar[]{2.0, 6.6, 1.4, 8.9, 4.5,3.2};

double ar[]{-3.0,-2.0,-5.0};
const double* max_index = find_max_address(ar, std::size(ar));
// max_index_array(ar, std::size(ar)); // op1

// const double* max_index = max_index_array(ar, std::size(ar)); // 3, for position of 8.9 op2

std:: cout << *max_index; // 8,9
   
    return 0;
}