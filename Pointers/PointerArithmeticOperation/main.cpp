#include <iostream>
using namespace std;

int main(){

    int arr1[9]{1,2,3,4,5,6,7,8,9};

    int* point{arr1};

    cout << point << endl; // endereco de memoria

    cout << *point << endl; //1 primer nro do array
    cout << ++point << endl; // move 4 bytes e isso e sumado ao a primera posicao do array entao a resposta sera 5 (posicao 1 + 4 bytes = 5) sem importar o valor do numero da primeira posicao
    point = arr1; // reset the pointer to the start of the array


    cout << "size fo int = " << sizeof(*point) << endl;
    
    cout << *(point+4) << endl; // move forward  4* size of int 


    point = arr1;

    for (size_t i = 0; i < size(arr1); i++)
    {
        cout << point[i] << " ";
    }
    


    return 0;
}