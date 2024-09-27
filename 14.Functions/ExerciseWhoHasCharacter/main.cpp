#include <iostream>
#include "declaring.h"
using namespace std;


int main(){
  char message[] {"Hello there"};

contains_character(message,sizeof(message)/sizeof(char),'o');
find_character(message,sizeof(message)/sizeof(char),'o');
  
return 0;
}
