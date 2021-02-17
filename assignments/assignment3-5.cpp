// Zhiqi Tang CS01
// Make a program that generates 3 random numbers. Whenever you run the program, it generates completely different numbers. The generated numbers must be between 0 and 99. 
// Assign the values ot variables num1, num2, num3
// Get the summation and average of all the values
// print out the summation result and all generated values
// output format: two precision after the decimal point

#include <iostream> 
#include <cstdlib> 
#include <iomanip>
using namespace std;

int main()
{

  const int MIN_VALUE = 0;
  const int MAX_VALUE = 99;

  int num1, num2, num3;
  float sum;
  float average;

  unsigned seed = time(0);

  srand(seed);

  num1 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
  num2 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
  num3 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
  cout << "The generated values are " << num1 << ", " << num2 << ", and " << num3 << ".";

  sum = (num1 + num2 + num3);
  average= (num1 + num2 + num3) /3.0;

  cout << setprecision(2) << fixed;
  cout << " The summation of the 3 random numbers is " << sum << ", and the average is " << average << ". " << endl; 

  return 0;

}

  


