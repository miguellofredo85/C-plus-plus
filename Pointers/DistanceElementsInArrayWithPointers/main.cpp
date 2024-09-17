#include <iostream>
using namespace std;

int main(){

    int data[] {1,2,3,4,5,6,7,8,9};
    
    int* point1{data + 0};
    int* point2{data + 8};

    cout << *point1 << endl;
    cout << *point2 << endl;

    cout << *point1 - *point2 << endl; // distancia entre elementos

    //specia std para distancia entre elementos com pointer

    ptrdiff_t positive_pointer = point2 - point1;
    ptrdiff_t negative_pointer = point1 - point2;


    cout << positive_pointer << endl;
    cout << negative_pointer << endl;
    cout <<" size of ptrdiff_t " << sizeof(ptrdiff_t)<< endl;
    return 0;
}