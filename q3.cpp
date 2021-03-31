/* Make the program that writes the numbers into the file "numbers.txt". 
We are going to make N(defined as 10) random numbers that should be between 1 to 50. 
When each number is generated, we check the number that is greater than the preceding number. 
If so, the number will be written into the file "numbers.txt". */ 


#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int &);

int main()
{
  int i = 1;
  int num;

  ofstream ofs;

  unsigned seed = time(0);
  srand(seed);

  ofs.open("numbers.txt");
  if (ofs.fail())
  {
    cerr << "File open error";
    exit(0);
  }

  while (i <= 10)
  {
    getRdnum();
    if (isGreater(num))
    {
      ofs << num << endl;
    }
    i++;
  }
}

int getRdnum()
{
  int num;
  int MIN_VALUE = 1;
  int MAX_VALUE = 50;

  unsigned seed = time(0);
  srand(seed);

  num = (rand() % 50);
}

int isGreater(int &N)
{
  static int prec = 0;

  if (N > prec) 
    return 1;
  if (N < prec) 
    return 0;
}