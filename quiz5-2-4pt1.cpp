// Zhiqi Tang

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int empID;
  int N;
  string empName;
  string depName;
  double salary;

  ofs.open("employee.txt");
  if (ofs.fail())
  {
    cerr << "File failed to open " << endl;
    exit(0);
  }

  cout << "Enter the number of employees: ";
  cin >> N;

  ofs << N << endl;

  for (int i = 0; i < N; i++)
  {
    cout << "Enter the employee's ID: ";
    cin >> empID;
    ofs << empID << endl; 
    cout << "Enter the employee's name: ";
    cin >> empName;
    ofs << empName << endl;
    cout << "Enter the department name: ";
    cin >> depName;
    ofs << depName << endl;
    cout << "Enter the salary: ";
    cin >> salary;
    ofs << salary << endl;

    if (!ofs.fail())
    cout << "Data written into file\n";
  }
  ofs.close();
  return 0;
}