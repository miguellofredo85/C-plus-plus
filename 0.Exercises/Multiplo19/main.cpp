#include <iostream>
#include <vector>
using namespace std;


int main(){
    int i{100};
        do
        {
            if( i % 19 == 0){
                cout << i << " ";
                
            }
            ++i;

        } while (i <= 1000 );
        
    //   std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    // //Don't modify anything above this line
    // //Your code should go below this line
    // for(int i : numbers){
    //     if(i % 3 == 0){
    //         std::cout << multiple_of_19 << " ";
    //     }
    // }
    return 0;
}