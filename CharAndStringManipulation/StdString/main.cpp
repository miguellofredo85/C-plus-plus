#include <iostream>
#include <string>
using namespace std;



int main(){

   string full_name;
   string planet{"Earth. My favourite planet!"};
   string pref_planet{planet};
   string message{"Hello there", 5}; // inicia com string Hello pois 5 e o max
   string repeat_char(4, 'e'); //repeat the char 4 times
   string saying_hello{"Hello World", 6, 5}; //inicia no index 6 e pega 5

   cout << pref_planet << endl;
   cout << repeat_char << endl;
   cout << saying_hello << endl;



return 0;
}    
