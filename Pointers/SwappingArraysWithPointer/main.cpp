#include <iostream>
using namespace std;

int main(){

    int arr1[]{1,2,3,4,5};
    int arr2[]{6,7,8,9,10};

    int* p_arr1{arr1};
    int* p_arr2{arr2};


 for (size_t i = 0; i < size(arr1); i++)
    {
        cout << p_arr1[i] << " ";
    }
    cout << endl;
    
    for (size_t i = 0; i < size(arr2); i++)
    {
        cout << p_arr2[i] << " ";
    }

    cout << endl;
    

    int* temp;

    temp = p_arr1;
    p_arr1 = p_arr2;
    p_arr2 =temp;

    for (size_t i = 0; i < size(arr1); i++)
    {
        cout << *(p_arr1 + i) << " ";
    }
    cout << endl;
    
    for (size_t i = 0; i < size(arr2); i++)
    {
        cout << *(p_arr2 + i) << " ";
    }
    
    


    return 0;
}