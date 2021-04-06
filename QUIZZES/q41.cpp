// Zhiqi Tang
// decimal numbers and make sure its only positive that work

#include <iostream>
#include <iomanip>
using namespace std;
int main(){

  // Hold choice
  int choice; 
  // Hold radius 
  int radius;
  // Hold all the variables needed for equation
  int area, length, width, base, height;
  //Hold areas
  int circle_area, rectangle_area, triangle_area;

  // Display the choices
  cout << "Geometry Calculator\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a triangle\n";
  cout << "4. Quit\n\n";
  // Getting choices from user
  cout << "Enter your choice (1-4): ";
  cin >> choice;

  cout << fixed << showpoint << setprecision(2);

  // Responding to choice that user made with a switch statement 
  switch (choice)
  {
    case 1: 
		cout << "What is the radius of the circle? ";
		cin >> radius;
		circle_area = (3.14159 * (radius * radius));
		cout << "The area of the circle is " << circle_area << endl;
		// Set a break between the choices
		break;

    case 2:
		cout << "What is the length of the rectangle? ";
		cin >> length;
		cout << "What is the width of the rectangle? ";
		cin >> width;
		rectangle_area = length * width;
		cout << "The area of the rectangle is " << rectangle_area << endl;
		break;

    case 3: 
		while (base > 0 && height > 0);
		cout << "What is the triangle's base? ";
		cin >> base;
		cout << "What is the triangle's height? ";
		cin >> height;
		triangle_area = (base * height * 0.5);
		cout << "The area of the triangle is " << triangle_area << endl;
		break;

    case 4: 
		cout << "Sorry! Please choose numbers 1-3 to find the area of a circle, rectangle or triangle." << endl;
		break;

    // Because the question says to have an error message
    default:
		cout << "Please choose numbers 1-4 to use this calculator.";
	

  }
return 0;

}

// I decided to use a switch statement because this question was most similar to the question that we had assigned for homework. I thought it looked cleaner and would have easier readibility. I had a little bit of trouble with formulas and not declaring my variables in the scope, but I managed to fix them. The format of this is first displaying the choice, then using a switch statement to further the choices and respond back to them. 