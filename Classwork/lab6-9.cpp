#include <iostream>
using namespace std;

int getinput(int &, int &, int &);
int maxmin(int, int, int, int &, int &);
int main()
{
  int num1, num2, num3;
  int max, min;

  getinput(num1, num2, num3);
  maxmin(num1, num2, num3, max, min);
  cout << "The gap between " << max << " and " << min << ": " << max-min << endl;
}

int getinput(int &num1, int &num2, int &num3)
{
  cout << "Enter your first number: ";
  cin >> num1;
  cout << "Enter your second number: ";
  cin >> num2;
  cout << "Enter your third number: ";
  cin >> num3;
}

int maxmin(int n1, int n2, int n3, int &max, int &min)
{
  min = n1;
  if (min > n2)
  min = n2;
  if (min > n3)
  min = n3;

  max = n1;

  if (max < n2)
  max = n2;
  if (max < n3)
  max = n3;

  return 0;
}