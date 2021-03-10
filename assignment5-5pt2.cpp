// Zhiqi Tang

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
  ifstream ifs;
  int nStudents, i;
  string stuName;
  double score1, score2;
  double sum1, avg1, sum2, avg2;

  ifs.open("studentRecord.txt");
  if (ifs.fail())
  {
    cerr << "File open error\n";
    exit (0);
  }

  ifs >> nStudents;
  cout << "There are " << nStudents << " students. " << endl;

  while (ifs >> stuName >> score1 >> score2)
  {
  cout << stuName << " has the scores " << score1 << " and " << score2 << ". " ;

  i++;
  sum1 = score1 + score2;

  if (i !=0 )
  {
    avg1 = (sum1 / 2);
  }
  cout << stuName << "'s sum is " << sum1 << ", and their average is " << avg1 << ". " << endl;

  sum2 += sum1;
  avg2 = (sum2 / (nStudents*2));

  }

  cout << "The class sum is " << sum2 << ", and the class average is " << avg2 << endl;

  }