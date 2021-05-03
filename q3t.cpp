// Make the program that finds the greatest number in the first half and the second half in the array 

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int findmax(int number[], int from, int to);
const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  int from = 0;
  int to = N-1;
  int max;

  
  max = findmax(number, from, to);
  cout << max << endl;


}

int findmax(int num[], int from, int to)
{
  int max = 0;
  for(int i = 0; i < N/2; i++)
  {
    if (max < num[i])
    {
      max = num[i];
    }
  }
}