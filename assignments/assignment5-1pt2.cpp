// Zhiqi Tang
// Write a program that finds the sequence of 2 to power n in the given range.

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int begin, end;
  int counter;

  cout << "Enter two integers for the range between 0-1300: ";
  cin >> begin >> end;

  if (begin < 0 || end > 1300){
    cout << "Please enter two integers between 0-1300 for the range." << endl; }
  else {
    counter = 2;
    while (counter <=1300) {
      counter *= 2;
      cout << counter << endl;
    }
  }
  return 0;
  }

// I had a lot of trouble with this code, but I looked on the replit and saw an example of using counter. The codes I did before didn't work. I tried to use counter for this code, and it worked. 
