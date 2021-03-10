// Zhiqi Tang
// Make a program that finds the list of prime numbers between the range [begin..end] 
// For example, if we assume that begin=5, end=20, the output will be 5, 7, 11, 13, 17, 19
// The “begin” and “end” are the user inputs that are between 1 to 100.
// begin < end

#include <iostream>
using namespace std;

int main()
{
  int begin, end;

  cout << "Enter a minimum value for the range between 1 and 100: ";
  cin >> begin;
  if (begin > 1 && begin < 100)
  {
    cout << "Enter a maximum value for the range between 1 and 100: ";
    cin >> end;
    if (end < 100 && end > 0)
    {
      cout << "The prime numbers between " << begin << " and " << end << " are: ";
    }
  }
  else {
    cout << "Please enter numbers between 1 and 100. " << endl;
  }

  for (i = begin; i < end; i++)
  {
    
  }




}


