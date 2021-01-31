// Zhiqi Tang CS01 MW
// Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
// The tax should be 6.75 percent of the meal cost.
// The tip should be 20 percent of the total after adding the tax.
#include <iostream>
using namespace std;

int main ()
{
  double meal_price = 88.67;
  float meal_tax_percent = 1.0675;
  double meal_tip_percent = 0.2;

  double meal_tax = meal_price * meal_tax_percent;
  double meal_tip = meal_tax * meal_tip_percent;
  double meal_total = meal_tip + meal_tax;

  cout << "Meal cost: $" << meal_price << endl;
  cout << "Tax amount: $" << meal_tax << endl;
  cout << "Tip amount: $" << meal_tip << endl;
  cout << "Meal Total: $" << meal_total << endl;

  return 0;
}
// Line 10-12 defines variables and is initialized with values.
// Line 14 calculates the meal tax amount by multiplying meal price by 1.0675.
// Line 15 calculates meal tip by multiplying meal tax by meal tip percent, which is 0.2. 
// Line 16 calculates meal total by adding together meal tip and meal tax. 

