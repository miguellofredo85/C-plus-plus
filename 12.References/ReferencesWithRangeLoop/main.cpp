#include <iostream>
using namespace std;

int main(){

   int scores[]{1,2,3,4,5,6};

   for(auto& ref_score : scores){
        ref_score = ref_score*10;
   }

   for(auto score : scores){
    cout << score << '\n';
   }


    return 0;
}