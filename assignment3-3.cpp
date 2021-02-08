// Zhiqi Tang CS01
// Write a program that converts Celcius temperatures to Farhrenheit temperatures 
// F= 9/5C+35

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double C;
  double F;


  cout << "Enter the temperature by Celcius ";
  cin >> C;

  F = ((9/5.0)*C) + 32.00;

  cout << "Celcius " << C << " is " << F << " Farhrenheit" << endl;
  cout << setprecision(2) << fixed;

  return 0;

}



