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

  int from;
  int to;

  findmax(number, from, to);
  cout << "The max in the first half is: " << from << endl;
  cout << "The max in the second half is: " << to << endl;

}

int findmax(int num[], int from, int to)
{
  int max = 0;
  int fmax = 0;
  for(int i = 0; i <= N/2-1; i++)
  {
    if (max < num[i])
    {
      max = num[i];
    }
  }
  cout << max << endl;
  from = max;
  for(int i = N/2; i < N-1; i++)
  {
    if(fmax < num[i])
    {
      fmax = num[i];
    }
  }
  cout << fmax << endl;
  to = fmax;
  return from, to;
}
