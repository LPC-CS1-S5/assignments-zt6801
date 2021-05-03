// Find the elements where the difference between adjacent elements less than 10

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const int N = 10;
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  for(int i = 0; i < N; i++)
  {
    if (i != 9)
    {
      if (abs(number[i]-number[i+1]) < 10)
    {
      cout << "abs value of " << number[i] << " - " << number[i+1] << " = " << number[i] - number[i+1] << " is less than 10\n";
    }
    }
    else if (i == 9)
    {
      if (abs(number[i]-number[i-1]) < 10)
    {
      cout << "abs value of " << number[i] << " - " << number[i-1] << " = " << number[i] - number[i-1] << " is less than 10\n";
    }
    }
  }
  }

