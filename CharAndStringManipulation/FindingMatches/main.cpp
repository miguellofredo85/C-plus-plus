#include <iostream>
#include <cstring>
using namespace std;


int main(){

std::string data[] {"catching","iteration","fresh","iterative","outside","mercy"};
unsigned int size{3};
const char* key{"iter"};
std::string * matches = new std::string [size];
int data_size = sizeof(data)/sizeof(data[0]);
int num_pos{0};



cout << data_size << endl;

for (size_t i = 0; i < data_size; i++)
{
    if(data[i].find(key)!= std::string::npos){
        
        matches[num_pos++] = data[i];

    
    }
}

cout << "Found " << num_pos <<  " matches. They are: " ;

for (size_t i = 0; i < num_pos; i++)
{
if(i == num_pos -1){
            std::cout << matches[i];
        }else{
            std::cout << matches[i] << " ";
        }}

return 0;
}