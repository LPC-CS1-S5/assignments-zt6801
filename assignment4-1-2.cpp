// Zhiqi Tang
// The Fast Freight Shipping Company charges the following rates: 2kg or less, $1.10; over 2kg but not more than 6kg, $2.20; over 6kg but not more than 10kg, $3.70; over 10kg but not more than 20kg, $4.80.
// Write a program that asks for the weight of the package and the distance it is to be shipped, then displays the charges.

#include <iostream>
#include <iomanip>
using namespace std;

int main () 
{

// Constants
const int MIN_WEIGHT = 0,
          MAX_WEIGHT = 20,
          MIN_DISTANCE = 10,
          MAX_DISTANCE = 3000;

// Variables 
float weight, distance, total_charges;

// Get the weight of the package
cout << "What is the weight of the package? ";
cin >> weight;

// Make sure the weight of package doesn't exceed 20kg and less than 0kg
if (weight <= MIN_WEIGHT)
{
  cout << "The package must weigh more than 0kg to ship. " << endl;
}
if (weight > 20)
{
  cout << "The package must weigh less than 20kg to ship. " << endl;
}
// Get the distance
else 
{
  cout << "How many miles does it need to be shipped? "; 
  cin >> distance ;

  // Make sure the distance doesn't exceed the maximum or less than the minimum
  if (distance < MIN_DISTANCE || distance > MAX_DISTANCE)
  {
    cout << "We do not accept distances less than 10 miles or more than 3,000 miles. " << endl;
  }
  // Calculate the total charges
  else 
  {
    if (weight <= 2)
      total_charges = (distance/ 500) * 1.10;
    else if (weight > 2 && weight <=6)
      total_charges = (distance/ 500) * 2.20;
    else if (weight > 6 && weight <=10)
      total_charges = (distance/ 500) * 3.70;
    else if (weight > 10 && weight <=20)
      total_charges = (distance/ 500) * 4.80;
    
    // Display the total charges including the distance and weight
    cout << setprecision(2) << fixed;
    cout << "Total charges are $" << total_charges <<  " for a distance of " << distance << " miles and a total weight of " << weight << " kg." << endl;

  }
}

  return 0;

}

// Troubleshooting-- accidentally wrote iostream as iosmanip! Forgot the input for the distance