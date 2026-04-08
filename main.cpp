//This program calculates the Area.
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main()
{

//Variables
int length, width, radius, height, base;
double pi = 3.141592653589793;
int choice; 
  
  cout << "Choose an option (1-4): "<< endl;
 
  
  cout << "1. Calculate the Area of a Circle."<<endl;
  cout << "2. Calculate the Area of a Rectangle."<<endl;
  cout << "3. Calculate the Area of a Triangle."<<endl;
  cout << "4. Exit."<<endl;
  
  
  cin >> choice; 

 if (choice <= 0 || choice > 4 )
 {
   cout << "Invalid entry. Choose a number between 1-4."<<endl;
   return 0;
 }
 switch(choice)
   {
     case 1:
       
       cout <<"Enter the radius of the circle:"<< endl;
       cin>> radius;
      if(radius <0)
      { 
         cout << "Invalid entry. Radius can not be less than zero."<< endl;
         return 0;
      }
       cout<< "Area:"<< pi * radius * radius <<endl;
      break;
     case 2: 
       cout << "Enter the length of the rectangle:"<<endl;
       cout << "Enter the Width of the Rectangle:"<<endl;
       cin >> length;
       cin >> width;
      if (length < 0 || width <0)
      {
       cout<< "Invalid entry. Length and width can not be less than zero." << endl;
        return 0;
      }
       cout<<"Area:"<< length * width << endl;
      break;
     case 3:
       cout << "Enter the base of the triangle:"<<endl;
       cout<< " Enter the height of the triangle:"<<endl;
       cin >> base; 
       cin >> height;
      if (base <0 || height <0)
      {
        cout<< "Invalid Entry. Base and height can not be less than zero." << endl;
        return 0;
      }
       cout <<"Area:"<< 0.5 * base * height << endl;
      break;
     case 4:
       cout<< "You have exited the program."<< endl;
     
   }
     
      
  return 0;
}