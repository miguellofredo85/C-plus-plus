#include <iostream>
using namespace std;


int main(){

    const size_t COUNT{20};
    unsigned i {0}; 

   for (i; i < COUNT; ++i ){

    if(i==5){
        continue;
    }

    if(i==11){
        break;
    }
        cout << i << endl;
   }
   cout << "Loop done!" << endl;
   
    return 0;
}