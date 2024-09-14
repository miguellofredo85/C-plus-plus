#include <iostream>
using namespace std;
#include <algorithm>

int main(){
int num[] {2,5,1,9,23,12,15};

cout << size(num) << endl;

for (size_t i = 0; i < size(num); i++)
{
  cout << num[i];
}

  cout << endl;


cout << sizeof(num)/sizeof(num[4]); // 7 qualquer numero do array vai dar certo para calcular o tamanho do array

  cout << endl;


for (size_t i = 0; i < (sizeof(num)/sizeof(num[0])); i++)
{
  cout << num[i];
}

  cout << endl;


for (int i: num)
{
  cout << i;
}

 cout << endl;

return 0;
}