// Make the program that finds the greatest number in the first half and the second half in the array 

#include <iostream>
using namespace std;

int findmax(int number[], int from, int to);
const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  int from = 0;
  int to = N-1;

  findmax(number, from, to);
  cout << from << to << endl;

}

int findmax(int num[], int from, int to)
{
  for(int i = 0; i < num[N/2-1]; i++)
  {
    

  }
}