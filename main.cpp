//This program will order students alphabetically.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 string file;
 ifstream inFile;

   inFile.open(file);

  cout<< "Enter the file name:";
  cin >> file;

  if (!inFile) {
    cout<< "Error with opening file!"<<endl;
    return 1;
  
    // starting counter at zero
  string student, first, last;
    int count = 0;

    if (inFile >> student)

    {
      count++;
        
        if(student < first)
           first = student;

        
        if(student > last)
           last = student;
   
    }
    
    //output 

    cout<< "Number of students: "<< count << endl;
    cout<< "First student in line: "<< first << endl;
    cout << "Last student in line: " << last << endl;

    inFile.close();
      return 0;
    
  }

  
  
}