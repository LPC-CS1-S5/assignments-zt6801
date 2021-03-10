// Zhiqi Tang

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int nStudents;
  double score1, score2;
  string stuName;

  ofs.open("studentRecord.txt");

  if (ofs.fail())
  {
    cerr << "File failed to open" << endl;
    exit (0);
  }

  cout << "Enter the number of students: ";
  cin >> nStudents;

  ofs << nStudents << endl;

  for (int i = 0; i < nStudents; i++)
  {
    cout << "Enter the student's name: ";
    cin >> stuName;
    ofs << stuName << endl;
    cout << "Enter two of the student's scores: ";
    cin >> score1 >> score2;
    ofs << score1 << endl;
    ofs << score2 << endl;

    if (!ofs.fail())
    cout << "Data written into file\n";

  }
  ofs.close();
  return 0;
}