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

    return 0;
}