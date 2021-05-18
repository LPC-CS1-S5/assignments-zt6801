// [1] Create the Structure for the information about an Employee.

const int MAXSIZE = 1000;
#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
  string name;
  int salary;
  string department;
  int date;
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


}
