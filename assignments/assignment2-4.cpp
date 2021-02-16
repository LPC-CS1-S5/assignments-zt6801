// Zhiqi Tang CS01 MW

#include <iostream>

using namespace std;

int main () 
{
  double regular_price = 59.95;
  double discount_amount = regular_price * 0.2;
  double sales_price = regular_price - discount_amount;

  cout << "regular price: $" << regular_price << endl;
  cout << "Discount amount: $" << discount_amount << endl;
  cout << "Sales price: $" << sales_price << endl;
  
}