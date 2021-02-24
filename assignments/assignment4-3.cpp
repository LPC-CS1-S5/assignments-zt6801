// Zhiqi Tang
// Rewrite the following program. Use a switch statement instead of the if/else if statement

#include <iostream>
using namespace std;
int main()
{
  // From problem
  int choice;

  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  // Asking user for what formula to use
  cout << "Enter 1, 2, 3, or 4: ";
  cin >> choice;

  // switch statement instead of if/else if
  switch (choice)
  {
    // States the ConstantExpression and the statements
    case 1: cout << "Pi times radius squared.\n";
    // break statement because the textbook says for consistency
    break;
    case 2: cout << "Length times width.\n";
    break;
    case 3: cout << "Pi times radius squared times height.\n";
    break;
    case 4: cout << "Well okay then, good bye!\n";
    break;
    default: cout << "Not good with numbers, eh?\n";

  }
  return 0;

}

// Mistakes I had: my case was Capitalized, and so it told me 'Case' was not declared in this scope. Also, because of this problem, there was an "error: expected ';' before numeric constant". Once I fixed the mistake of making Case lowercase, it started working. 