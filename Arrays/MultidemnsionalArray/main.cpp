#include <iostream>
using namespace std;
#include <algorithm>

int main(){

//  int arr[4][3]; // ocupa 48 bytes na memoria
int arr[4][3] { //primer array contem 4 elementos, cada um (inners array) contem 3 elementos. posso omitor o valor do primer array mas nunca do segundo exemplo itn num{3}; int arr[][num], no caso de ser 3d sempre sera o primero o que pode ficar vazio mas NAO o 2 e/ou o 3
  {1,2,3},
  {4,5,6},
  {7,8,9},
  {10,11,12}
};
 cout << size(arr) << endl; //printara o valor do primer array

 cout << sizeof(arr) << endl;

for (size_t i = 0; i < size(arr); i++){
for (size_t j = 0; j < size(arr[i]); j++)
{
  cout << "item " << i << ", " << j << ". Pacote " << arr[i][j] << endl; // arr[i][j] mostrara data lixo caso nao esteja inicializado 
}
}


  return 0;
}