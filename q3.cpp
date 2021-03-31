/* Make the program that writes the numbers into the file "numbers.txt". 
We are going to make N(defined as 10) random numbers that should be between 1 to 50. 
When each number is generated, we check the number that is greater than the preceding number. 
If so, the number will be written into the file "numbers.txt". */ 

#include <iostream>
#include <srand>
#include <time>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int N);

int main()
{
  ofstream ofs;

  ofs.open("numbers.txt");
  if (ofs.fail())
  {
    cerr << "File open error";
    exit(0);
  }

  int isGreater();

  for (i = 0, i < N, i++)
  {
    getRdnum();
    if (isGreater(num))
    {
      ofs >> num;
    }
  }
  ofs.close();
}

int getRdnum()
{
  int num;
  int MIN_VALUE = 1;
      MAX_ VALUE = 50;

  unsigned seed = time(0);
  srand(seed);
  num = (rand() % (MAX_VALUE - MIN_VALUE +1 ) + MIN_VALUE)
}

int isGreater(int N)
{
  for ()
}