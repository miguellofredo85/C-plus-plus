#include <iostream>
#include <cctype>
using namespace std;

// https://en.cppreference.com/w/cpp/header/cctype

int main(){

//    cout << "isalnum: ";
//    boolalpha;

//    cout << "C is alphanumeric? : "  << isalnum('C') << '\n';
//    cout << "^ is alphanumeric? : "  << isalnum('^') << '\n';

//    char original_str[]{"Hi my name is Miguel"};
//    char dest_str[(size(original_str))];

//    for (size_t i = 0; i < size(original_str); i++)
//    {
//     dest_str[i] = toupper(original_str[i]); // tolower pra fazer o contrario
//    }

// int blank{};
//   //  for (size_t i = 0; i < size(original_str); i++)
//   //  {
//   //   if(isblank(original_str[i])){
//   //     blank += 1;
//   //   }
//   //  }
   
//   for (auto i : original_str)
//    {
//     if(isblank(i)){
//       blank += 1;
//     }
//    }


//   cout << original_str << '\n';
//   cout << dest_str << '\n';  

// cout << "we found " << blank << " empty spaces" << '\n';

char data[]{"Hi im learning C++"}; unsigned int size[18];

    unsigned int vowel_count{};
    unsigned int consonant_count{};
    
    //Don't modify anything above this line
    //Your code should go below this line
    for(size_t i = 0; i < size; i++){

       if(data[i] == 'a' || data[i] == 'e' || data[i] == 'i' || data[i] == 'o' || data[i] == 'u' || data[i] == 'A' || data[i] == 'E' || data[i] == 'I' || data[i] == 'O' || data[i] == 'U' ){

           vowel_count += 1;

       }else if( ( (data[i] != 'a') || (data[i] != 'e') || (data[i] != 'i') || (data[i] != 'o') || (data[i] != 'u') || (data[i] != 'A') || (data[i] != 'E') || (data[i] != 'I') || (data[i] != 'O') || (data[i] != 'U')) && !(isdigit(data[i])) && !(isxdigit(data[i])) && !(isspace(data[i])) && !(isblank(data[i])) && !(ispunct(data[i])) ){

           consonant_count += 1;

       }
   }
   
   std::cout << "The string contains "<< vowel_count << " vowels and " << consonant_count << " consonants";
return 0;
}