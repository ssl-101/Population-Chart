//This program calculates rate of a package
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

//Variables
double RATE, DISTANCE, WEIGHT;
  
  cout << "Enter package weight in kg: "<< endl;
  cin >> WEIGHT;

 if (WEIGHT <= 0 || WEIGHT > 20 )
 { 
   cout <<"invalid weight entry, must be between 1 and 20 kg."<< endl;
   return 0;
 }
  cout << "Enter distance in miles:"<< endl;
  cin >> DISTANCE;
 
   if (DISTANCE < 10 || DISTANCE >3000)
   {
     cout<< "Invalid distance entry, must be between 10 and 3000 miles"<< endl;
     return 0;
   }
  
//Cost per weight
   if (WEIGHT <=2) RATE = 1.10;
    else if (WEIGHT > 2 && WEIGHT <= 6) RATE = 2.20;
    else if (WEIGHT > 6 && WEIGHT <= 10) RATE = 3.70;
   else RATE = 4.80;

//Distance calculations

 double TOTAL = ceil(DISTANCE / 500) * RATE ;
  cout << fixed << setprecision(2)<< showpoint;
  cout << "Total cost: $"<< TOTAL << endl;



  return 0;
}