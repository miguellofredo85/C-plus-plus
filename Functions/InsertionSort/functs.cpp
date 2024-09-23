#include <iostream>

void insertion_sort(int * array, unsigned int size){

	for( unsigned int i{1}; i < size; ++i){
    	int key = array[i];

    	int j = i-1; 
    	while ( (j >= 0) && (array[j] > key)){
        	array[j+1] = array[j]; // Shift right.
        	j = j-1;
    	}
    	array[j+1] = key;
	}
}


void print_array(int* arr, unsigned int n) 
{ 
    for (unsigned int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}