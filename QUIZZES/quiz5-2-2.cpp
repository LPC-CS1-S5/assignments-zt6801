// Zhiqi Tang
// Make a program that shows the N to the power of 0, 1, 2, 3 .. M. 
// For example, if we assume that N =2, M = 3, the output is 1, 2, 4, 8. (2 to the power of 0 to 3)
// 0 < N < 10,  1 <= M <= 10
// Do not use <cmath> pow () function

#include <iostream>
using namespace std;

int main()
{
  // N to the power of M
  int N, M; 
  int fnum;

  // Get user input for the base
  cout << "Enter the base: ";
  cin >> N;

  // Set up nested if condition to make sure the ranges apply to variables N and M
  if (N > 0 && N < 10)
  {
    cout << "Enter the power: ";
    cin >> M;
    if (M <= 10 && M >= 1)
    {
      cout << N << " to the power of " << M << " is ";
    }
    }
  else {
    cout << "Please enter a value greater than zero and less than ten for the base and one to ten (including one and ten) for the power. " << endl;
  }

  // Initialize the result
  int result = 1;

  // First number of the equation
  fnum = (N / N);
  // Print the first number of the equation
  cout << fnum << " ";

  // For loop to find the power-- i is less than M because we only want it to loop M times since I already used another equation to find the first value 
  for (int i = 0; i < M; i++)
  {

   // This is 1 * N, and then it loops and then the result of 1 * N * N and so forth
   result *= N;

   cout << result << " ";
  }

}

