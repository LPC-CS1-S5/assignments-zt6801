// Zhiqi Tang
// Make a program that finds the prime numbers according to two user inputs [begin, end]

#include <iostream>
using namespace std;

int inputValid(int, int);
void getListprime(int begin = 0, int end = 100);

int main()
{
  int begin, end;
  int res;

  cout << "Enter your two inputs: ";
  cin >> begin >> end;

  res = inputValid(begin, end);
  if (!res)
  exit (0);

  if (begin == end)
  {
    getListprime(begin);
  }
  if (begin > end)
  {
    getListprime();
  }
  if (begin < end)
  {
    getListprime(begin, end);
  }
  
}

int inputValid(int number1, int number2)
{
  if ((number1 < 0) || (number2 < 0))
  return 0;
  else
  return 1;
}

void getListprime(int begin, int end)
{
  int i, j;

  for (i = begin; i <= end; i++)
  {
    for (j = 2; j <= (i/2); j++)
    if (i % j == 0)
    break;
    if (j > (i/2) && (i != 1) && (i != 0))
    cout << i << "\t";
  }
  cout << "are prime" << endl;
}

// I had trouble making this program work because I didn't put parameters in the function prototype. When I switched the variables in the parameters from getListprime function into the function prototype, it started working when I put the user input examples into it.
// The main function is like the function we had before in 6-1, but we have to call getListprime for different arguments. The inputValid tests so that we have positive integers entered or else the function does not work. The getListprime makes sure we get the prime functions, and the default arguments and parameters make sure that we have the correct begin and end for each situation as listed in the problem. 