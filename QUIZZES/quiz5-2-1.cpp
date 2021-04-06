// Zhiqi Tang 
// Make a program that finds the minimum value among the 5 random numbers.
// The range of random numbers: [0..99]
// Print out all five generated random numbers as well as the minimum value.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  // Declare variable random number and minimum
  int rdnum;
  int min;

  // Srand to seed random numbers
  srand(time(0));

  // Initialize minimum so that it is greater than the generated numbers (so that we can find the minimum)
  min = 100;
  // Display generated random numbers
  cout << "The Generated Random Numbers: " << endl;

  // For loop so it can find a new generated number each time, i < 5 because we need 5 values
  for (int i = 0; i < 5; i++)
  {
    // Find the random number (loops)
     rdnum = (rand() % 100);

    // Print the 5 random numbers
    cout << rdnum << " ";

    // If condition to make the loop
    if (min > rdnum)
    min = rdnum;
  }

  // Print the minimum
  cout << "\nThe Minimum Value: " << min << endl;

}

// I used a for loop for the five random numbers, and then an if condition inside of it to find the minimum value. This made the most sense to me. A problem I came across was that I didn't like how the generated numbers printed out so I had to play around with the printing until I liked it. 

