#include <iostream>
using namespace std;
#include <algorithm>

int main(){

// //  int arr[4][3]; // ocupa 48 bytes na memoria
// int arr[4][3] { //primer array contem 4 elementos, cada um (inners array) contem 3 elementos. posso omitor o valor do primer array mas nunca do segundo exemplo const size_t num{3}; int arr[][num], no caso de ser 3d sempre sera o primero o que pode ficar vazio mas NAO o 2 e/ou o 3 assim itn num{3} const size_t num2{4}; int arr[][num][num2]

// // no caso de nao completar a quantidade do array o sistema colocara zeros no lugar podemos ver isso comentando o 4to array
//   {1,2,3},
//   {4,5,6},
//   {7,8,9},
//   {10,11,12}
// };
//  cout << size(arr) << endl; //printara o valor do primer array

//  cout << sizeof(arr) << endl;

// for (size_t i = 0; i < size(arr); i++){
// for (size_t j = 0; j < size(arr[i]); j++)
// {
//   cout << "item " << i << ", " << j << ". Pacote " << arr[i][j] << endl; // arr[i][j] mostrara data lixo caso nao esteja inicializado 
// }
// }



int multi[][2][3]{
  {
  {70,45,92},
  {12,23,54}
  },
  {
  {124,766,1001},
  {645,878,1341} // se omito un valor o sistema colocara zero
  }
};
for (size_t i = 0; i < size(multi); ++i)
{
  for (size_t j = 0; j < size(multi[i]); ++j)
  {
  cout << "[";
    for (size_t k = 0; k < size(multi[i][j]); ++k)
    {
      cout << multi[i][j][k] << " ";
    }
    cout << "]" << endl;
  }
  
}



  return 0;
}