// Zhiqi Tang
// Write a program that calculates the 2 to the n_th power( n is a negative or positive integer)
// e.g, if n = 10,  calculates 2 ** 10 = 1024. (Do not use the function pow( ) )

#include <iostream>
using namespace std;
int main() {
  int n, num, i;
  int nthPower=1;
  float invertnthPower;

  cout << "Enter the power n that you want to calculate 2^n: ";
  cin >> n;

  if (n > 0){
    num = n;
  }
  else{
    num = num * -1;

  }
  for (i=0; i<num; i++){
    nthPower *=2;
  }
  if (n<0){
    invertnthPower= 1.0/nthPower;
  }
  cout << "2" << "^" << n << "=" << nthPower << endl;
}
