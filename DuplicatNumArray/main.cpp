#include <iostream>
#include <string>




int main(){

int numbers[] {1,2,4,5,1,8,2,3,6,1,4,2};
 unsigned int collection_size{12};
 

 for(int i{0} ; i < collection_size; i++){

           for(int j = i+1; j < collection_size; j++){

            if(numbers[j] == numbers[i]){
                for(int k = j; k < collection_size; k++){
                    numbers[k] = numbers[k+1];
                }
                collection_size--;
                j--;
            }
           }
        }

    std::cout << "The collection contains " << collection_size << " unique numbers, they are ";

        for(int i ; i < collection_size; i++){
            std::cout << numbers[i];
            if(i != collection_size-1){
                std::cout << " ";
        }else{
            std::cout <<"";
        }
        }

    return 0;
    }


   