// The program generates three random numbers and then finds the min number among these values. We need to develop three functions..... 

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void getRandnum(int &n1, int &n2, int &n3);
int findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

int main()
{
  int n1, n2, n3;
  int min;

  getRandnum(n1, n2, n3);


  min = findMin(n1, n2, n3);
  cout << "The min is: " << min;

  printResult(n1, n2, n3, min);
}

void getRandnum(int &n1, int &n2, int &n3)
{
  srand(time(0));

  n1 = (rand() % 100);
  n2 = (rand() % 100);
  n3 = (rand() % 100);

  return;
}

int findMin(int n1, int n2, int n3)
{
  int min = n1;
  if (n2 < min)
  {
    min = n2;
  }
  if (n3 < min)
  {
    min = n3;
  }

  return min;
}

void printResult(int n1, int n2, int n3, int min)
{

}

