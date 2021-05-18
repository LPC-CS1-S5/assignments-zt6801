// [1] Create the Structure for the information about an Employee.

const int MAXSIZE = 1000;
#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
  int ID;
  string firstname;
  string lastname;
  int salary;
  string department;
  string month;
  int day;
  int year;
};

// [2] Create the text file for the employee information “employee.txt” 
// [3] Make a function that constructs the structure Employee
int makeStructArray(Employee[]);
//[4] Make functions that find a particular employee with some conditions
// Find the employee that has a salary greater than 100,000
void richEmployee(Employee[], int);
// Find the employee that works in the “Computer” department.
void findComputer(Employee[], int);

// [5] Make the main function that drives your functions.
int main()
{
  Employee emp[MAXSIZE];
  int numofEmployees = 0;

  numofEmployees = makeStructArray(emp);
  cout << "There are " << numofEmployees << " employees." << endl;
  // printout?

  richEmployee(emp, numofEmployees);


}

int makeStructArray(Employee emp[])
{
  ifstream ifs;
  int i;
  ifs.open("employee.txt");
  if (!ifs)
  {
    cerr << "File Open Error" << endl;
    exit(0);
  }
  if (ifs)
  {
    int i = 0;
    while (ifs >> emp[i].ID >> emp[i].firstname >> emp[i].lastname >> emp[i].salary >> emp[i].department >> emp[i].month >> emp[i].day >> emp[i].year)
    {
      i++;
    }
    return i;
  }
}

void richEmployee(Employee emp[], int numofEmployees) // salary greater than 100,000
{
  for (int i = 0; i < numofEmployees; i++)
  {
    if (emp[i].salary > 100000)
    {
      cout << emp[i].firstname << emp[i].lastname << endl;
    }
  }
}
