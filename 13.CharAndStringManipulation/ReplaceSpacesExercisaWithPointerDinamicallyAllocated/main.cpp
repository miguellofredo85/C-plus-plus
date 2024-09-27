#include <iostream>
#include <cctype>
using namespace std;



int main(){

char data[]{"The sky is blue my friend."};  

unsigned int size(26);

char * result{nullptr};

result = new char[size];

for (size_t i = 0; i <= size; i++)
{
    if(isspace(data[i])){
        data[i] = '_';
    }
    result[i] = data[i];
}

cout << "After replacing the spaces, we get : " << result;

 delete [] result;
 result = nullptr;

return 0;
}    
