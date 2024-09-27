#include <iostream>
using namespace std;

int main(){

    int data[]{181,82,22,53,19,1,51,217,12,11};
    unsigned int size{10};
    int * max_address;
    int max_num;

    for (size_t i = 0; i < size; i++){

        if(data[i] > data[i+1]){
                max_num = data[i];
        }

        for (size_t j = 1; j < size; j++)
        {
            if(data[j] > max_num){
                max_num = data[j];

            max_address = &data[j];

        
        }
        
        }
        

    }
    
    cout << max_address << endl;

    cout << *max_address;

    return 0;
}