// Zhiqi Tang CS01

// Write a program that asks the user for the number of males and the number of females registered in a class. The program should display the percentage of males and females in the class.
// Suppose there are 8 males and 12 females in a class. There are 20 students in the class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60%.

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
  double males;
  double females;

  cout << "How many males are registered in the class?" << endl;
  cin >> males;
  cout << "How many females are registered in the class?" << endl;
  cin >> females;

  double studentTotal= males + females;
  double percentageMale = (males/ studentTotal) *100;
  double percentageFemale = (females/ studentTotal) *100;

  cout << setprecision(2) << fixed;
  cout << "The percentage of males in the class is" << endl;
  cout << percentageMale << "% " << endl;
  cout << setprecision(2) << fixed;
  cout << "The percentage of females in the class is " << endl;
  cout << percentageFemale << "% " << endl;

  return 0;


}

