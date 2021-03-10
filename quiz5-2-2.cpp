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

  cout << "Enter the base: ";
  cin >> N;

  if (N > 0 && N < 10)
  {
    cout << "Enter the power: ";
    cin >> M;
    if (M <= 10 && M >= 1)
    {
      cout << N << " to the power of " << M << ": ";
    }
    }
  else {
    cout << "Please enter a value greater than 0 and less than 10 for the base and one to ten for the power. " << endl;
  }

  for (int i = 0; i < M, i++)
  {
    
  }

}

