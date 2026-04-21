//this program will display
//a population bar chart.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{

  const int popAmount = 1000; //population
  const int beginingYear = 1900; //begining year
  const int betweenInt = 20;//intreval inbetween years
  
  string file;
  ifstream inFile;

  const perPeople = 1000;

 cout<< "Enter file name: "<<endl;
 cin >> file ;

  inFile.open(file);

  if (!inFile) {
    cout<< "Error opening file"<<endl;
      return 1;
  }

  cout<< "POPULATION DISPLAY CHART "<< endl;
  cout<< "(Every * displays 1000 people)" <<endl;

  int POP;
  int year= beginingYear;

  while (inFile >> POP) {
    cout << year<<":";
    int STARS = population/popAmount;
    for (int i = 0); i <STARS; i++)
   {
  cout <<"*";
   }
  cout <<endl:
  year += betweenInt;
  }
  inFile.close();


  return0;
  
}