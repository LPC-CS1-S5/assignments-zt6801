// Make a program that calls the two overloaded functions swapTwoValues() so that two values are swapped in the function. 

#include <iostream>
#include <iomanip>  // Use for setw(5)
using namespace std;

void swapTwoValues(int &, int &); // Function Prototype for swapTwoValues int
void swapTwoValues(float &, float &); // Function Prototype for swapTwoValues float

int main()
{
  int n1, n2;
  float f1, f2; // Could use different variables, but I chose to keep the same to send to other functions because this is a quiz and I want it to look uniform
  cout << "Enter two values for integer swap: ";
  cin >> n1 >> n2;
  cout << "Before Swap: " << n1 << setw(5) << n2 << endl; // Show before swap
  swapTwoValues(n1, n2);  // Call function to get the swapped values
  cout << "Swapped Values: " << n1 << setw(5) << n2 << endl;  // Show after swapped

  // Same for float :)
  cout << "Enter two values for the float swap: ";  
  cin >> f1 >> f2;
  cout << "Before Swap: " << f1 << setw(5) <<  f2 << endl;
  swapTwoValues(f1, f2);
  cout << "Swapped Values: " << f1 << setw(5) << f2 << endl;

}
void swapTwoValues(int &n1, int &n2)
{
  int tmp;  // insert temporary number to hold place of n1 so we can successfully swap the numbers
  tmp = n1;
  n1 = n2;
  n2 = tmp;
  return; // Return the numbers
}

void swapTwoValues(float &f1, float &f2)
{
  float tmp;  // Same as int swapTwoValues
  tmp = f1;
  f1 = f2;
  f2 = tmp;
  return;
}