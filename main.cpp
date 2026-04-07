//This program displays days with in a month 
// including leap year adjustments.
#include <iostream>
using namespace std;

int main()
{

//Variables
  int MONTH, YEAR, DAYS;
  cout << "Enter month: ";
  cin >> MONTH; 

//if else to also verify user entry
  if (MONTH <1 || MONTH > 12)
  { 
    cout << "Invalid entry, must enter a number 1-12"<< endl;
  }
  else
  {
    cout<<"Enter year:";
    cin >> YEAR;
    if (YEAR <0)
    {
      cout << "Invalid entry, year must not be negative." << endl;
    }
     else
    {
      switch(MONTH)
        {
          case 4: case 6: case 9: case 11:
          DAYS = 30; 
        break;
          case 2:
          if ((YEAR % 4 == 0 && YEAR % 100 !=0) || (YEAR % 400 == 0))
          DAYS = 29;
       else
          DAYS = 28;
        break;
       default:
          DAYS = 31;
          break;
        }
      cout << DAYS << "  days in the month."<< endl;
    }
  }
  
  return 0;
}