//This program will display the ingredient ratio for a cookie recipe.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

//base recipie
  const double sugar_for_one = 1.5 / 48; // sugar amount
  const double butter_for_one = 1.0 / 48; // butter amount  
  const double flour_for_one = 2.75 / 48; // flour amount

  double input_amount;

  cout << "Enter the amount of cookies you are making: ";
  cin >> input_amount; 

//Calculations
  const double required_sugar = sugar_for_one * input_amount;
  const double required_butter = butter_for_one * input_amount;
  const double required_flour = flour_for_one * input_amount;

//Conclusion
  cout << fixed << setprecision(2);
  cout << "Sugar:  " << required_sugar << "  cups"<< endl;
  cout << "Butter:  " << required_butter << "  cups" << endl;
  cout << "Flour:  " << required_flour << "  cups"<< endl;

  return 0;
}