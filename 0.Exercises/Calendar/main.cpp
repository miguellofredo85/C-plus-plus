#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    signed int year;
    unsigned int day;

    int number_of_days_in_a_month = 0;
  unsigned int starting_point{day};
  unsigned int day_counter{0};
  unsigned int date_width{6};

   cout << "Enter the year: ";
   cin >> year;

    cout << "Enter the day of the year [1. Monday ... 7. Sunday]: ";
    cin >> day;


   cout << "Calendar for " << year << endl;
   
//mostra calendario 
  for (int month = 1; month <= 12; month++)
  {
    switch (month)
    {
      case 1:
        number_of_days_in_a_month = 31;
        cout << "--January " <<year <<  " --" << endl;
      break;
      case 2:
        //Check for Leap years 
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
          number_of_days_in_a_month = 29;
        else
          number_of_days_in_a_month = 28;
        cout << "--February " <<year <<  " --" << endl;

      break;
      case 3:
        number_of_days_in_a_month = 31;
        cout << "--March " <<year <<  " --" << endl;

      break;
      case 4:
        number_of_days_in_a_month = 30;
        cout << "--April " <<year <<  " --" << endl;
      break;
      case 5:
        number_of_days_in_a_month = 31;
        cout << "--May " <<year <<  " --" << endl;
      break;
      case 6:
        number_of_days_in_a_month = 30;
        cout << "--June " <<year <<  " --" << endl;
      break;
      case 7:
        number_of_days_in_a_month = 31;
        cout << "--July " <<year <<  " --" << endl;
      break;
      case 8:
        number_of_days_in_a_month = 31;
        cout << "--August " <<year <<  " --" << endl;
      break;
      case 9:
        number_of_days_in_a_month = 30;
        cout << "--September " <<year <<  " --" << endl;
      break;
      case 10:
        number_of_days_in_a_month = 31;
        cout << "--October " <<year <<  " --" << endl;
      break;
      case 11:
        number_of_days_in_a_month = 30;
        cout << "--November " <<year <<  " --" << endl;
      break;
      case 12:
        number_of_days_in_a_month = 31;
        cout << "--December " <<year <<  " --" << endl;
      break;
    }

    cout<< std::setw(date_width) << "Mon"
        << std::setw(date_width) << "Tue"
        << std::setw(date_width) << "Wed"
        << std::setw(date_width) << "Thu"
        << std::setw(date_width) << "Fri"
        << std::setw(date_width) << "Sat"
        << std::setw(date_width) << "Sun" << endl;

    //printa espacos vazios
    for(unsigned int j{1};j < starting_point; ++j){
      cout << std::setw(date_width) <<  ""; 
      ++ day_counter;
      if(day_counter == 7){
        cout << endl; // passa pra seguinte semana
        day_counter = 0;
      }

      
    }

    //printa os dias
    for(unsigned int i{1} ; i <= number_of_days_in_a_month; ++i){ 
      cout << std::setw(date_width) << i;
      ++day_counter;

      if(day_counter == 7){
        cout << endl;
        day_counter = 0;
      }      
       
    }

    //setea pra prox mes
    starting_point = day_counter + 1;
    day_counter = 0;
    cout <<  "\n\n";

   
  }





    return 0;
}