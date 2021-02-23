// Zhiqi Tang
// Make a Program that generates three random numbers and then calculates the summation and average
// display all the generated numbers, sum, and average with setprecision(5).
// Elaborate on your algorithm and program design

#include <iostream>
#include <iomanip> // setprecision
#include <cstdlib> // For random numbers (srand)
#include <ctime> // For the time 
using namespace std; // so we don't have to type std:: everytime

int main () {

  // Variables
  int num1, num2, num3;
  float sum;
  float average;

  // System time
  unsigned seed = time(0);

  // seed random generator
  srand(seed);

  // Get the numbers (limited to 100 so that it's easier to see data)
  num1 = (rand() % 100);
  num2 = (rand() % 100);
  num3 = (rand() % 100);

  // Display the random generated numbers
  cout << "The three random numbers are: " << num1 << ", " << num2 << ", and " << num3 << endl;

  sum = (num1 + num2 + num3); // sum formula
  average = (sum/ 3.0);  // average formula

  // Display the sum
  cout << "The sum of the three numbers is " << sum << endl;
  // Display the average (with setprecision(5)because the sum doesn't need it)
  cout << "The average of the three numbers is " << setprecision(5) << fixed << average << endl;

return 0;

}

// I decided to first get the random numbers, but I limited it so that it's easier to see the sum/ averages. I then displayed the random generated numbers. Finally, I added the equations and then displayed the results from the equations.