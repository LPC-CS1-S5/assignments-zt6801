// Write a program that calculates 2 to the nth power (n is a negative or positive integer) by using the function double nthpowerp(int num) and double nthpowern(int num)
// example double result = nthpowerp(number)

#include <iostream>
#include <iomanip>  // iomanip for setprecision
using namespace std;

double nthpowerp(int);  // Function prototypes
double nthpowern(int);
void printout(double);

// MAIN FUNCTION
int main()
{
  double result;  // hold result, double because of neg integers
  int n;  // Declare variable input
  cout << "This program will calculate 2 to the nth power.";  // Introduce program
  cout << "\nEnter your input for the power: "; 
  cin >> n; // Ask user for variable and save

  // Condition for positive int or negative int
  if (n > 0) 
  {
    result = nthpowerp(n);
  }
  else if (n < 0)
  {
    result = nthpowern(n);
  }
  else
  {
    result = 1;
  }

  printout(result); // Call printout function
}

// FUNCTION 2 (POSITIVE INT)
double nthpowerp(int num)
{
  int i;
  int nthPower = 1;
  int n;

  // n = num;
  // When I was writing this code in class, I put n = num; here and I'm just marking it down on here too as a reminder that I don't need it because num is already in the parameters

  for (i = 0; i < num; i++)
  {
    nthPower *= 2;
  }
  return nthPower;  // return nthPower to main as result
}

// FUNCTION 3 (NEGATIVE INT)
double nthpowern(int num)
{
  int i;
  float invertnthPower;
  int nthPower = 1;

  // Forgot to put num = num * -1 during class; this is because of the for loop (i will be greater than num if we insert a negative number so the loop would not make sense) 
  num = num * -1; 

  for (i = 0; i < num; i++)
  {
    nthPower *=2;
  }
  invertnthPower = 1.0/ nthPower;

  return invertnthPower;
}

// FUNCTION 4
void printout(double num)
{
  cout << "The power number is: " << setw(10) << fixed << setprecision(5) << num << endl;
}

// I had a bit of trouble during class because of the new concept, and I was a little confused about the arguments because of how many functions there are. Forgetting the return statement was also something my group missed. In the other repl.it, it seems like our program still wasn't exact and didn't give out the correct answers for results so I fixed them in here. (I'm also really sorry the code is so messy, I tried to label them as different functions.)
