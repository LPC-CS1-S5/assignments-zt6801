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

  cout << "ID\t\t\t" << "Name\t" << "Department\t" << "Salary" << endl;

  sum = 0;
  while (ifs >> empID >> empName >> depName >> salary)
  {
    cout << empID << "\t" << empName << "\t" << depName << "\t\t\t" << salary << endl;
    
    i++;
    sum += salary;
    avg = (sum / N);
  }

  cout << "\t\t\t\t\tTotal: " << sum << "\tAverage: " << avg << endl;
}
