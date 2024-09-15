#include <iostream>
using namespace std;
#include <algorithm>

int main(){

 int arr[4][3]; // ocupa 48 bytes na memoria

 cout << sizeof(arr) << endl;

for (size_t i = 0; i < 4; i++){
for (size_t j = 0; j < 3; j++)
{
  cout << "item " << i << ", " << j << ". Pacote " << arr[i][j] << endl; // arr[i][j] mostrara data lixo pois nao esta inicializado 
}
}


  return 0;
}