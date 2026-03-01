//This Program calculates the distance a car can travel
// on a tank of gas. 
#include <iostream>
using namespace std;

int main()
{
  const double tankSize = 20; //gallons
  const double townMPG = 23.5; // MPG in town
  const double highwayMPG = 8.9; // MPG on highway

  //Calculations for distance
   double distanceTown =tankSize * townMPG;
   double distanceHW =tankSize * highwayMPG;

  cout <<" With " <<  tankSize  << " gallons of gas, the car will drive " <<endl; 
  cout << distanceTown <<" miles in town. "<<endl;
  cout <<" With "<<  tankSize << " gallons of gas, the car will drive "<<endl;
  cout <<  distanceHW  <<" miles on the highway."<<endl;

  return 0;
  
   }