#include <iostream>


int main(){

    int values [] {1,2,3,4,5,6,7,8,9};

    for(int i : values){
        std::cout << i << std::endl;
    }
    return 0;
}