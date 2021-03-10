// Zhiqi Tang
// Make a program that find the prime numbers in the given range.
// example) find the prime numbers in the range [1..100]
// 2, 3, 5, 7, ... , 97

#include <iostream>
using namespace std;

int main(){

  int begin, end, flag, i;

  // Get the range from the user
  cout << "Enter the minimum and then maximum value for the range: ";
  cin >> begin >> end;

  // Display a heading
  cout << "The prime numbers between " << begin << " and " << end << " are: " << endl;

  for (i = begin; i < end; i++) 
  {
    if ( i == 0 || i == 1 ) // 0 and 1 are not prime
    continue;

    flag = 1;

    for (int j = 2; j <= (i / 2); j++) // checking if i is prime
    {
      if (i % j == 0)
      {
        flag = 0;
        break;
      }
    }
    
    if (flag == 1) // if flag = 1, the numbers are prime
    cout << i << " " << endl;
  }
  return 0;
}

// I had a bit of trouble making this assignment and had to redo it a lot of times on VSCode, but the example in class helped to determine if a number was prime or not helped. The flowchart in the Prezi also helped. 