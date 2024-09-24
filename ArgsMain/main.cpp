#include <iostream>
using namespace std;





int main(int argc, char **argv){ // int argc num of argv, argv are the arguments in terminal including .\rooster

cout << "args : " << argc << endl;

for (size_t i = 0; i < argc; i++)
{
    cout <<"arg " << i << " : " << argv[i] << '\n';
}


  
return 0;
}
