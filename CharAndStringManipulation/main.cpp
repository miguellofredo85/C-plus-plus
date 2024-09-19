#include <iostream>
#include <cctype>
using namespace std;

// https://en.cppreference.com/w/cpp/header/cctype

int main(){

   cout << "isalnum: ";
   boolalpha;

   cout << "C is alphanumeric? : "  << isalnum('C') << '\n';
   cout << "^ is alphanumeric? : "  << isalnum('^') << '\n';

   char original_str[]{"Hi my name is Miguel"};
   char dest_str[(size(original_str))];

   for (size_t i = 0; i < size(original_str); i++)
   {
    dest_str[i] = toupper(original_str[i]); // tolower pra fazer o contrario
   }

int blank{};
   for (size_t i = 0; i < size(original_str); i++)
   {
    if(isblank(original_str[i])){
      blank += 1;
    }
   }
   
  cout << original_str << '\n';
  cout << dest_str << '\n';  

cout << "we found " << blank << " empty spaces" << '\n';
return 0;
}