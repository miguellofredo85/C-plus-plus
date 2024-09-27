#include <iostream>
using namespace std;

int main(){

    int arr1[9]{1,2,3,4,5,6,7,8,9};

    int* point{arr1};

    cout << point << endl; // endereco de memoria

    cout << *point << endl; //1 primer nro do array
    cout << ++point << endl; // move 4 bytes e isso e sumado ao a primera posicao do array entao a resposta sera 5 (posicao 1 + 4 bytes = 5) sem importar o valor do numero da primeira posicao
    cout << *point << endl; // print 2 pq moveu 4 bytes e agora aponta pra 2 posicao
    point = arr1; // reset the pointer to the start of the array


    cout << "size fo int = " << sizeof(*point) << endl;

    cout << *(point+4) << endl; // move forward  4* size of int entao printara o 5 que e o que esta na posicao 4 do array


    point = arr1;

    for (size_t i = 0; i < size(arr1); i++)
    {
        cout << point[i] << " ";
             cout << endl;


    }
     cout << "--------------" << endl;
    
// modifying data with pointer arithmetic 

arr1[0] = 45;
*(arr1 + 1) = 33;
*(point + 2) = 56;

for (size_t i = 0; i < size(arr1); i++)
    {
        cout << arr1[i] << " ";
    }
     cout << "--------------" << endl;

for (size_t i{size(arr1)}; i > 0; i--)
{
    cout << *(arr1 + i -1) << " "; //arr1 aponta pra o primer nro, entao 0 - 1 apontara pra o ultimo e assim decresendo
}

     cout << "--------------" << endl;


point = arr1 + (size(arr1) -1); // apontando ao ultimo valor do arr1

for (size_t i{size(arr1)}; i > 0; i--)
{
    cout << *(point--) << " "; // decrecendo 
}


    return 0;
}