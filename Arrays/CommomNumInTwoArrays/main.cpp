#include <iostream>
using namespace std;
#include <algorithm>

int main(){

  int array_1[] {1,2,4,5,9,3,6,7,44,55}; 
  int array_2[] {11,2,44,45,49,43,46,47,55,88};
  unsigned int count{};
  int new_data[10];

  for (unsigned int i = 0; i < 10; i++)
  {
    for (unsigned int j = 0; j < 10; j++)
    {
      if(array_1[i] == array_2[j]){
        new_data[count++] = array_1[i];
        break;
      }
    }
    
  }

  cout << "There are " << count << " common elements";
  
  if(count != 0){

  cout << " they are : ";

  for (unsigned int i = 0; i < count; ++i)
  {
    cout << new_data[i] << " ";
  }
  
}

  return 0;
}