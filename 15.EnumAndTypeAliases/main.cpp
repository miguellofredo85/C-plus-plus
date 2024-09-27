#include <iostream>
using namespace std;
#include <algorithm>

int main(){
// int num[] {2,5,1,9,23,12,15};

// cout << size(num) << endl;

// for (size_t i = 0; i < size(num); i++)
// {
//   cout << num[i];
// }

//   cout << endl;


// cout << sizeof(num)/sizeof(num[4]); // 7 qualquer numero do array vai dar certo para calcular o tamanho do array

//   cout << endl;


// for (size_t i = 0; i < (sizeof(num)/sizeof(num[0])); i++)
// {
//   cout << num[i];
// }

//   cout << endl;


// for (int i: num)
// {
//   cout << i;
// }

//  cout << endl;

//algoritmo para souber se o array e ordenado ou nao
int numbers[] {1,2,4,5,8,12,13,16,71,92};
unsigned int collection_size{10};
bool sorted{true};

for (size_t i = 0; i < collection_size; ++i)
{
  if(i == 0){
    continue;
  }
  
    if(!(numbers[i] > numbers[i-1])){
      !sorted;
      break;
    }
}

cout << sorted;


    // for (int e : numbers){
    //   cout << e << " ";
    // }
return 0;
}