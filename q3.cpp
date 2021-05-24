#include <iostream>
using namespace std;

const int SIZE1 = 5;
const int SIZE2 = 10;
int numbers1[SIZE1] = {2, 3, 5, 9, 10};
int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 15, 17};

int main()
{
  int subsettrue[SIZE1];

  for(int i = 0; i < SIZE2; i++)
  {
    if (numbers1[i] == numbers2[i])
    {
      subsettrue[i] = numbers1[i];
    }
    else
    {
      subsettrue[i] = 0;
    }
  }

  for(int i = 0; i < SIZE2; i++)
  {
    if (subsettrue[i] != 0)
    {
      cout << "The array numbers1 is a subset of the array numbers2." << endl;
    }
    else
    {
      cout << "The array numbers1 is not a subset of the array numbers2." << endl;
    }
  }
}

