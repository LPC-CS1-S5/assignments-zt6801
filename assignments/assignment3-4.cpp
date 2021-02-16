// Zhiqi Tang CS01
// Write a program that calculates the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month
// The program should display a message similar to the following: The average rainfall for June, July and August is 6.72

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;
  double average;

  cout << "Enter the first month and rain amount: ";
  cin >> month1 >> rainfall1;
  cout << "Enter the second month and rain amount: ";
  cin >> month2 >> rainfall2; 
  cout << " Enter the third month and rain amount: ";
  cin >> month3 >> rainfall3;

  average = ((rainfall1 + rainfall2 + rainfall3)/3.0);

  cout << "The average rain fall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << endl;
  cout << setprecision(2) << fixed;
  
  return 0;
  
  }