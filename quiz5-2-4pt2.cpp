// Zhiqi Tang

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream ifs;
  int empID;
  int N, sum, avg, i;
  string empName;
  string depName;
  double salary;

  ifs.open("employee.txt");
  if (ifs.fail())
  {
    cerr << "File failed to open " << endl;
    exit(0);
  }

  ifs >> N;
  cout << "There are " << N << " employees." << endl;

  while (ifs >> empID >> empName >> depName >> salary)
  {
    cout << "ID\t\t" << "Name\t\t" << "Department\t\t" << "Salary\t\t"
    i++;
    sum += salary;
  }


}