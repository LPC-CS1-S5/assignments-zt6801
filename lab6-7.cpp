#include <iostream>
#include <iomanip>
using namespace std;

void getinput(int &, int &, int &);
void swap(int &, int &, int &);

int main()
{
  int num1, num2, num3;
  getinput(num1, num2, num3);
  cout << "Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;
  swap(num1, num2, num3);
  cout << "After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;
}

void getinput(int &num1, int &num2, int &num3)
{
  cout << "Enter your first number: ";
  cin >> num1;
  cout << "Enter your second number: ";
  cin >> num2;
  cout << "Enter your third number: ";
  cin >> num3;
  return;
}

void swap(int &num1, int &num2, int &num3)
{
  int tmp;
  
  tmp = num1;
  num1 = num3;
  num3 = num2;
  num2 = tmp;
  return;

}