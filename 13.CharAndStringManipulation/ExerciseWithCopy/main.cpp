#include <iostream>
#include <cstring>
using namespace std;



int main(){

    const char src1[] {"will old space the replace"};
    const char src2[] {"sense sky  hit has"};
    const char src3[] {"hello went is get"};
    const char src4[] {"red blue yellow orange"};

    char* result;
    result = new char[20];
   
   strncpy(result, src1 + 15, 3);
   strncpy(result + 3, src2 + 5, 4);
   strncpy(result + 7, src3 + 10, 3);
   strncpy(result + 10, src4 + 3, 5);
   
    


    cout << result;



    delete[] result;
    result = nullptr;

return 0;
}    
