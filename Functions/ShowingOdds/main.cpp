#include <iostream>
using namespace std;



void show_odds( unsigned int long long num){

  int num_len = num;
  int savenum{};
  unsigned int len{};

 while(num_len){
        num_len /= 10;
        len++;
 };

 for (size_t i = 0; i < len; i++)
 { 
    savenum = num % 10;   

  if(savenum % 2 != 0){
    
    std::cout << savenum;

  }
    num /= 10;
 }



}


int main(){


fun(98723713);

  
return 0;
}
