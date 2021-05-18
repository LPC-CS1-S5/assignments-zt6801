// [1] Create the Structure for the information about an Employee.

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