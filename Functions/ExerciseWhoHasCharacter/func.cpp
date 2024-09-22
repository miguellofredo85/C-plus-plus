#include <iostream>
using namespace std;


int contains_character( const char* str , unsigned int size , char c){

  for (size_t i = 0; i < size; i++)
  {
    if(str[i] == c){
      return i;
      break;

    }

  }

  return -1;

};


void find_character(const char* str, unsigned int size, char c){

  if(contains_character(str , size , c) >= 0 ){

    cout << "Found character " << c << " at index " << contains_character(str , size , c);

  }else{

    cout << "Could not find the character " << c << " in "<< str;

  }

  
};