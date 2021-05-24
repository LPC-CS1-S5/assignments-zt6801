#include <iostream>
using namespace std;

const int SIZE1 = 5;
const int SIZE2 = 10;
int numbers1[SIZE1] = {2, 3, 5, 9, 10};
int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 15, 17};

int main()
{
  for(int i = 0; i < SIZE2; i++)
  {
    if (numbers1[i] == numbers2[i])
    {
      cout << "The numbers r the same";
    }
    else 
    {
      cout << "The numbesr r diff";
    }
  }
}

