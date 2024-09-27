#include <iostream>
using namespace std;


int main(){

   const size_t ROW{12}, COL{3};

   cout << "Representing 2d data structure with nested loops\n";

   for(size_t row{0}; row < ROW; ++row){
    for(size_t col{0}; col < COL; ++col){
        cout << "row: " << row << " column: " << col << endl;
    }
    cout << endl;
   }


   
    return 0;
}