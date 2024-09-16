#include <iostream>
using namespace std;

int main(){
    int* point = {nullptr};
   int var1{56};
   point = &var1;
   cout << point << endl; // VALOR DE MEMORIA DA VAR1
   cout << *point << endl; // VALOR DA VAR1

   const char* point3 {"Hello World"};// isso seria um char array, const e ovrigatorio
   char* point2 = {nullptr};
   char var2 = {'H'}; // caso nao coloque const dara erro de compilacao
   point2 = &var2;
   cout << point2 << endl; // VALOR DE MEMORIA DA VAR2
   cout << *point2 << endl; // VALOR DA VAR2
   cout << point3 << endl; // hello world enteiro
   cout << *point3 << endl; // primeira letra da string por e um array


    char* predictions [] { //colocando o pointer nao preciso colocar a quantidade permitida de caracteres
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        ", huum, I don't see anything",
        "you drinking wine"
    };

    return 0;
}