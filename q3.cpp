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

  findmax(number, from, to);
  cout << "The max in the first half is: " << from << endl;
  cout << "The max in the second half is: " << to << endl;

}

int findmax(int num[], int from, int to)
{
  int max = 0;
  int fmax = 0;
  for(int i = from; i <= to/2; i++)
  {
    if (max < num[i])
    {
      max = num[i];
    }
  }
  cout << max << endl;
  for(int i = to/2; i < to; i++)
  {
    if(fmax < num[i])
    {
      fmax = num[i];
    }
  }
  cout << fmax << endl;
  return max, fmax;
}
