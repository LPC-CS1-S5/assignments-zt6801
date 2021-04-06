// Make a program that finds the prime numbers in a given range. 
// Example: find the prime numbers in the range [1...100] 
// 2, 3, 5, 7 ... 97 
// Zhiqi Tang

#include <iostream>
using namespace std;

// Function prototypes for inputValidation and getListprime so that we don't need to place it before the main function
int inputValidate(int, int);
// Void because the function does not return a value to the part of the program that executed it-- also no return statement
void getListprime(int, int); 

// Main function
int main()
{
  // Declare variables like in Prezi
  int begin, end;
  int res;

  // Ask user for input like in Prezi
  cout << "Enter your two inputs: ";
  cin >> begin >> end;

  // Validate the input with function inputValidate
  res = inputValidate(begin, end);
  if (!res)
  // Stop program if the variables aren't validated
  exit (0);

  // Call function
  getListprime(begin, end);

}

// Input Validation function (we used boolean in class, but I decided to keep it the way the Prezi had it)
int inputValidate(int begin, int end)
{
  if ((begin > end) || (begin < 0) || (end < 0))
  // Return as executed unsuccessfully (!res)
  return 0;
  else
  // Return as successful (res)
  return 1;
}

// Gather the prime numbers using void because doesn't return a value and no return statement
void getListprime(int begin, int end)
{
  // Get prime numbers function
  int i, j;
  for (i = begin; i <= end; i++)
  {
    for (j = 2; j <= (i/2); j++)
      if (i % j == 0)
      break;
      if (j > (i/2) && (i != 1))  // 1 is not prime 
      cout << i << "\t";
  }
  // Print prime above and label it
  cout << "are prime" << endl;
}

// I had trouble with my whole code because it wouldn't run past the main function. I also had a little bit of trouble finding the primes. Because we used boolean in class for the inputValidate function, I decided to keep it as an int like the Prezi was so I could have an example of both. I was a bit confused about the res in the inputValidate function. I wasn't sure if I was supposed to or not, but I added the (i !=1 ) in the getListprime function because I noticed that it kept printing out 1 as a prime, when 1 is neither prime nor composite. 0 was already taken care of in inputValidate because I had to make sure that the numbers were greater than zero. 
// My program algorithm was to do something similar to what we did in class. First function prototypes, the main function, then call the functions inside the main function. For my other two functions, it took me a little longer to figure out how to make them work, but they're similar to the ones we did in class. Finally, I printed i are prime. 