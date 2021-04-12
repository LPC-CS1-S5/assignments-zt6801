// Make a program that calls the two overloaded functions swapTwoValues() so that two values are swapped in the function. 
#include <iostream>
#include <iomanip>
using namespace std;

void swapTwoValues(int &, int &);
void swapTwoValues(float &, float &);

int main()
{
  int val1, val2;
  cout << "Enter two values for integer swap: ";
  cin >> val1 >> val2;
  swapTwoValues(val1, val2);
  cout << "Swapped Values: " << val1 << val2 << endl;

  cout << "Enter two values for the float swap: ";
  cin >> val1 >> val2;
  swapTwoValues(val1, val2);
  cout << "Swapped Values: " << val1 << val2 << endl;

}
void swapTwoValues(int n1, int n2)
{
  int tmp;
  tmp = n1;
  n1 = n2;
  n2 = tmp;
}

void swapTwoValues(float f1, float f2)
{
  int tmp;
  tmp = f1;
  f1 = f2;
  f2 = tmp;
}