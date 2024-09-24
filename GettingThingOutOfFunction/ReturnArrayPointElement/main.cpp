#include <iostream>

const double* max_index_array(const double arr[], int sizearr);


const double* max_index_array(const double arr[], int sizearr){ // funct must const so cant modify arr

int store_max_i{};
double max{};

for (size_t i = 0; i < sizearr; i++){
    if(arr[i] > max){
        max = arr[i];
        store_max_i = i;
    }
}
std::cout << store_max_i;
return &arr[store_max_i]; 

}

int main(){

double ar[]{2.0, 6.6, 1.4, 8.9, 4.5,3.2};

max_index_array(ar, 6);
   
    return 0;
}