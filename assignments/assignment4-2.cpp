// Zhiqi Tang
// Make a program that finds the minimum and maximum values among three integer values.
// int num1, num2, num3;
// cin >> num1 >> num2 >> num3;
// Find the min and max among three values.
// Display the numbers with ascending order ( min, other, max).

#include <iostream>
using namespace std;

int main ()
{
  // Variables
  int num1, num2, num3;
  int min, max;

  // Get the data or variables
  cout << "Enter your first value: ";
  cin >> num1;
  cout << "Enter your second value: ";
  cin >> num2;
  cout << "Enter your third value: ";
  cin >> num3;

  // Find the minimum
  min = num1;

  if (min > num2)
  min = num2;

  if (min > num3)
  min = num3;

  if (num2 > num3)
  min = num3;

  // Display the minimum
  cout << "The minimum of the three values is " << min << "." << endl;

  // Find the maximum
  max = num1;

  if (max < num2);
  max = num2;

  if (max < num3);
  max = num3;

  if (num2 > num3)
  max = num2;

  // Display the maximum
  cout << "The maximum of the three values is " << max << "." << endl;

  // Display the numbers in ascending order
  cout << "The numbers in ascending order: ";
  // Find the numbers in ascending order
  if (num1 > num2 && num2 > num3){
    cout << num3 << ", " << num2 << ", " << num1;
  }
  else if (num1 > num3 && num3 > num2) 
    cout << num2 << ", " << num3 << ", " << num1;
  
  else if (num2 > num1 && num1 > num3) 
    cout << num3 << ", " << num1 << ", " << num2;

  else if (num2 > num3 && num3 > num1) 
    cout << num1 << ", " << num3 << ", " << num2;
  
  else if (num3 > num1 && num1 > num2) 
    cout << num2 << ", " << num1 << ", " << num3 << endl;
  
  else {
    cout << num3 << ", " << num2 << ", " << num1 << endl;

  }
  
  return 0;


}

// Troubleshooting-- I had trouble with the else if statements, but I figured it out. At first, they were in descending order, so I had to switch it into ascending. 
