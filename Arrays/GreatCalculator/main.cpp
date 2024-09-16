#include <iostream>
#include <ctime>
using namespace std;

int main(){


  srand(time(0)); 

bool fim{false};
int enter_num;
int random1 = static_cast<size_t>(rand());
int random2 = static_cast<size_t>(rand());
int four_nums = static_cast<size_t>((rand() % 3));

cout << "Welcom to the gratest calcultor" << endl;


while (!fim)
{


switch (four_nums)

{
case 0:


  cout << "what is the result of " << random1 << " * " << random2 <<" : ";
  cin >> enter_num;
  if(enter_num != (random1*random2)){
    cout << "Naah... the correct result is : " <<random1*random2 << endl;;
  }else{
    cout << "Congrats! The correct result is " << enter_num << endl;
  }
  break;

case 1:
cout << "what is the result of " << random1 << " + " << random2 <<" : ";
  cin >> enter_num;
  if(enter_num != (random1+random2)){
    cout << "Naah... the correct result is : " <<random1+random2 << endl;;
  }else{
    cout << "Congrats! The correct result is " << enter_num << endl;
  }
break;
case 2:
cout << "what is the result of " << random1 << " - " << random2 <<" : ";
  cin >> enter_num;
  if(enter_num != (random1-random2)){
    cout << "Naah... the correct result is : " <<random1-random2 << endl;;
  }else{
    cout << "Congrats! The correct result is " << enter_num << endl;;
  }
break;
case 3:
cout << "what is the result of " << random1 << " / " << random2 <<" : ";
  cin >> enter_num;
  if(enter_num != (random1/random2)){
    cout << "Naah... the correct result is : " <<random1/random2 << endl;;
  }else{
    cout << "Congrats! The correct result is " << enter_num << endl;;
  }
break;
}


cout << "Quere continuar? (Y / N): ";

char sim_nao;

cin >> sim_nao;

if(sim_nao == 'Y' || sim_nao == 'y'){
  fim;
}else{
  cout <<"Ate mais!" << endl;
  !fim;

  break;
}

}


return 0;
}