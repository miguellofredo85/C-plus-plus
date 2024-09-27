#include <iostream>
using namespace std;

int main(){

    int arr1[9]{1,2,3,4,5,6,7,8,9};

   cout << "Comparing pointer: " << boolalpha << endl;;

    int* point1 = {&arr1[2]};
    int* point2 = {&arr1[8]};


   // quanto mais longe estiver a posicao no array maior sera o endereco de memoria 

    cout << (point1 < point2) << endl;
    cout << (point1 > point2) << endl;
    cout << (point1 == point2) << endl;
    cout << (point1 <= point2) << endl;
    cout << (point1 >= point2) << endl;
    cout << (point1 != point2) << endl;


    return 0;
}