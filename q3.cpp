// The program generates three random numbers and then finds the min number among these values. We need to develop three functions..... 

#include <iostream>
#include <iomanip> // Used for setw(5)
#include <ctime> // used for random number
#include <cstdlib> // used for random number
using namespace std;

void getRandnum(int &n1, int &n2, int &n3);
int findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min); // All copied from question-- Function Prototypes

int main()
{
  int n1, n2, n3;
  int min; // initialize the variables we are going to use

  getRandnum(n1, n2, n3);
  min = findMin(n1, n2, n3);
  printResult(n1, n2, n3, min); // Call the functions-- all copied from the question
}

void getRandnum(int &n1, int &n2, int &n3) // getRandnum function using reference variables
{
  srand(time(0)); // seed random 

  n1 = (rand() % 100);
  n2 = (rand() % 100);
  n3 = (rand() % 100); // Get the random numbers-- set to between 100 

  return; // Return the values to the main function-- then will be sent into result
}

int findMin(int n1, int n2, int n3) // findMin function and don't need reference variables (explain in Canvas)
{
  int min = n1; // Set min = n1 so that we can compare with the other two numbers
  if (n2 < min)
  {
    min = n2;
  }
  if (n3 < min)
  {
    min = n3;
  } // Finished comparison

  return min; // return the min 
}

void printResult(int n1, int n2, int n3, int min) // printResult function 
{
  cout << "The random numbers are: " << n1 << setw(5) << n2 << setw(5) << n3 << endl; // Using the function getRandnum which was sent to the main and then here, we are able to print out the numbers we got
  cout << "The min value is: " << min << endl; // Printing out min from findMin sent to 
}

