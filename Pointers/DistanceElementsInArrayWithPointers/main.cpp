#include <iostream>
using namespace std;

int main(){

    int data[] {1,2,3,4,5,6,7,8,9};
    
    int* point1{data + 0};
    int* point2{data + 8};

    cout << *point1 << endl;
    cout << *point2 << endl;

    cout << *point1 - *point2; // distancia entre elementos

    return 0;
}