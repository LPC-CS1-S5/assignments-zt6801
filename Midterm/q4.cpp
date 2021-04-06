/* Generate a random number between 1 to 100. We are going to use the function getRdnum() with overloaded parameters. */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRdnum();
int getRdnum(int);
int getRdnum(int, int);

int main()
{
  int n1 = 10;
  int n2 = 50;
  int rand;
  srand(time(0));

  getRdnum(); // Between 1 and 100
  cout << getRdnum() << endl;
  getRdnum(n2); // Between 1 and 50
  cout << getRdnum(n2) << endl;
  getRdnum(n1, n2); // Between 10 and 50
  cout << getRdnum(n1, n2) << endl;

}

int getRdnum()
{
  return (rand() % 100);
}

int getRdnum(int n2)
{
  int MIN_VALUE = 1;
  n2 = (rand() % (n2 - MIN_VALUE +1) +MIN_VALUE);
  return n2;
}

int getRdnum (int n1, int n2)
{
  int num;
  n1 += 1;
  num = (rand() % (n2 - n1 + 1) + n1);
  return num;
}

