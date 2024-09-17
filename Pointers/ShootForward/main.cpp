#include <iostream>
using namespace std;

int main(){

    int data[] {1,3,6,3,9,3,5,7,2,11};
    unsigned int offset{6};

    int* point{data};

    cout << "The element " << offset <<" slots away from the beginning is : " << *(point+offset);


    return 0;
}