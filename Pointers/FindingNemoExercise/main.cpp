#include <iostream>
using namespace std;

int main(){

    int data[] {11,2,52,53,9,13,5,7,12,11};
    unsigned int size{10};
    int * min_address;
    int min_alt{*(data)};

    cout << *(data + 1) << endl;
    cout << min_alt << endl;

    for (size_t i = 0; i < size; i++)
    {
        if(*(data+i) < min_alt){
            min_address = data + i;
            min_alt = data[i];
        }
    }
    

    cout << min_address;
    return 0;
}