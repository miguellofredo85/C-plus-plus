#include <iostream>
using namespace std;

int main(){

  unsigned int size{25};
  char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d'};
  unsigned int vowels_count = 0;

  for (size_t i = 0; i < size; ++i)
  {
      if(message[i] == 'a'|| message[i] == 'e'|| message[i] == 'i'|| message[i] =='o'|| message[i] =='u'){
        vowels_count += 1; 
      }
    
  }
  cout << "The string : " << message << " has " << vowels_count << " vowels" << endl;

  // cout << "message : ";
  // for (auto c : message)
  // {
  //   cout << c << endl;
  // }
  

return 0;
}