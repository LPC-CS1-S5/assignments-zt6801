/* Make the program that writes the numbers into the file "numbers.txt". 
We are going to make N(defined as 10) random numbers that should be between 1 to 50. 
When each number is generated, we check the number that is greater than the preceding number. 
If so, the number will be written into the file "numbers.txt". */ 

// close ofs. maybe later

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int N);

int main()
{
  ofstream ofs;
  int i;
  int N;
  int num;

  ofs.open("numbers.txt");
  if (ofs.fail())
  {
    cerr << "File open error";
    exit(0);
  }

  for (i = 0; i < N; i++)
  {
    getRdnum();
    if (isGreater(num))
    {
      ofs << num;
    }
  }
}

int getRdnum()
{
  int num;
  int i = 0;
  int MIN_VALUE = 1;
  int MAX_VALUE = 50;

  unsigned seed = time(0);
  srand(seed);
  while (i < 9)
  {
    num = (rand() % (MAX_VALUE - MIN_VALUE +1) + MIN_VALUE);
    i++;
  }
}

int isGreater(int N)
{
  N;
}