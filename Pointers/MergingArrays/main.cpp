#include <iostream>
using namespace std;

int main(){

   int data1[] {1,2,3,4,5,6,7};
   int data2[] {10,20,30,40,50,60};
   unsigned int size1{7};
   unsigned int size2{6};

   int* new_array { new int[size1+size2] };
   int k{0};

   for (size_t i = 0; i < size1; i++)
   {
    new_array[i] = data1[i];
   }
   for (size_t j = 0; j < size2; j++)
   {
    new_array[size1 + k] = data2[j];
    k++;
   }
   
   


    cout << (new_array[0]) << endl;
    cout << (new_array[1]) << endl;
    cout << (new_array[2]) << endl;
    cout << (new_array[3]) << endl;
    cout << (new_array[4]) << endl;
    cout << (new_array[5]) << endl;
    cout << (new_array[6]) << endl;
    cout << (new_array[7]) << endl;
    cout << (new_array[8]) << endl;
    cout << (new_array[9]) << endl;
    cout << (new_array[10]) << endl;
    cout << (new_array[11]) << endl;
    cout << (new_array[12]) << endl;

delete [] new_array;
new_array = nullptr;


    return 0;
}