#include <iostream>
#include <string>

int main(){

   bool green_light{true};
   bool red_light{false};

   if (green_light)
   {
    std::cout<<"pode passar!";
   }else{
    std::cout<<"pare!";
   }
   
   if(red_light){
    std::cout<<"la luz es roja nao pode continuar";
   }else{
    std::cout<<"luz verde!";
   }

    return 0;
}