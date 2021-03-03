// Zhiqi Tang
//**** Keep the indentation rules


#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  // Constants
  const int min_weight = 0,
            max_weight = 20,
            min_distance = 10,
            max_distance = 3000;

  // Variables
  float weight, distance, totalCharge;

  // Ask user for weight of package
  cout << "What is the weight of the package? ";
  cin >> weight;

  // Set domain/ input validation
  if (weight <= min_weight)
  {
    cout << "We do not accept values of 0 or less for the weight of the package." << endl;
  }
  if (weight > 20)
  {
    cout << "We do not accept weights of more than 20kgs." << endl;
  }
  // Input validation
  // Ask user for the distsance
  else 
  {
    cout << "How many miles does it need to be shipped? ";
    cin >> distance;

    // if distance is less than min OR more than max, doesn't work
    if (distance < min_distance || distance > max_distance)
    {
      cout << "We do not accept distances less than 10 miles or more than 3000 miles. These are the company's minimum and maximum shipping distances. " << endl;
    }
	else 
	{
		// Calculate charges
		if (weight <=2)
			totalCharge = (distance/500) * 1.10;
		else if (weight > 2 && weight <=6)
			totalCharge = (distance/500) * 2.20;
		else if (weight > 6 && weight <=10)
			totalCharge = (distance/500) * 3.70;
		else if (weight > 10 && weight <=20)
			totalCharge = (distance/500) * 4.80;

		// Output formatting
		cout << setprecision(2) << fixed;
		// Display total charges
		cout << "Total charges are $" << totalCharge << "." << endl;

	}
  }
return 0;


}
// I started out by labelling the variables and constants. Then, I made sure that the weights and distance didn't exceed the maximum or be less than the minimum. From then, I could calculate charges depending on the rates shown in the problem.