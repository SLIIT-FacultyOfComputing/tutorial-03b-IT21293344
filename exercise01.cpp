#include <iostream>
#include <iomanip>
using namespace std;
// function main begins program execution 
int main() {
  /* variable definition */
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

 cout << "No" 
      << setw(10) << "Name" 
      << setw(10) << "Marks" << endl; // Display Titles

  /* for loop execution */
 for (int r = 0; r < 5; r++) 
 {
     cout << r+1 
    << setw(11) << names[r] 
    << setw(10) << marks[r] << endl;

 } // End for loop execution

}//end of function main