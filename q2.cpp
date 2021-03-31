/* Make that program that reads the student's name (string) and two scores (integer) from the text file "students'txt)"
1. Read all lines from the file and show the summation and average value of each student.
Also at the last line, show the total number of students who have an average greater than 80 */ 

#include <iostream>
using namespace std;

int main()
{
  string name;
  int score1, score2;

  ifstream ifs;
  ifs.open("students.txt");
  if (ifs,fail())
  {
    cerr << "File open error";
    exit(0)
  }

  while (ifs >> name >> score1 >> score2)
  {
    
  }




}