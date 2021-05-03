#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;

int makearray(int []);
void printout(int[], int);

void swapfold(int[], int);
void sumfold(int[], int);
void equalfold(int[], int[], int);

const int SIZE = 100;

int main()
{
  int mask[SIZE];
  int number[SIZE];
  int equal[SIZE];
  int last;

  last = makearray(number);
  printout(number, last);

  cout << "swapfold: ";
  swapfold(number, last);
  printout(number, last);

  cout << "sumfold: \n";
  sumfold(number,last);

  cout << "array: ";
  last = makearray(number);
  printout(number, last);

  cout << "equalfold: ";
  equalfold(number, equal, last);
  printout(equal, (last/2.0));
}

void swapfold(int number[], int last)
{
  for(int i = 0; i < (last/2); i++)
  {
    swap(number[i], number[last-i-1]);
  }
  return;
}

void sumfold(int number[], int last)
{
  int sum = 0;
  for(int i = 0; i < last/2; i++)
  {
    cout << "Sum of " << number[i] << " and " << number[last-i-1] << " = ";
    number[i] += number[last-i-1];
    cout << number[i] << endl;
  }
}

void equalfold(int number[], int equal[], int last)
{
 for (int i = 0; i < (last/2); i++)
 {
   if (number[i] == number[last-i-1])
    equal[i] = 1;
  else
    equal[i] = 0;
  }
  return;
}

int makearray(int number[])
{
  int last;
  srand(time(NULL));
  do{
    last = rand() % 20;
  } while (last < 10);

  for(int i = 0; i < last; i++)
  {
    number[i] = rand() % 10;
  }
  return last;
}

void printout(int number[], int last)
{
  for(int i = 0; i < last; i++)
    cout << setw(5) << number[i];
  cout << endl;
}
