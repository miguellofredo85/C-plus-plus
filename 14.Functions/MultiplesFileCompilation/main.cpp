#include <iostream>
using namespace std;


bool is_palindrome(unsigned long long int num){
    
    {
    int temp;
    int remainder;
    unsigned long long int reversed=0;
    temp = num;
    while(temp>0)
    {
        remainder = temp%10;
        reversed = (reversed*10)+remainder;
        temp = temp/10;
    }
    if(reversed==num)
        return true;
    else
        return false;
}
}


int main(){

// cout << minnum(4, 8) << endl;
// cout << maxnum(564,6678) << endl;
// cout << mult(4,5) << endl;

is_palindrome(32323);
is_palindrome(453453);



  
return 0;
}
