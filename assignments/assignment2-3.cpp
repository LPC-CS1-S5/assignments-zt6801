// Zhiqi Tang CS01 MW

// Pseudocode
// Regular wages = base pay rate x regular hours
// Overtime wages = overtime pay rate x overtime hours
// Total wages = regular wages + overtime wages
// Display the total wages


#include <iostream>
using namespace std;
int main()
{
  double work_hours=50;
  double regular_wages, overtime_wages;
  double base_pay_rate=18.25, overtime_pay_rate=27.78;
  double regular_hours=40, overtime_hours;
  double total_wages;

  regular_wages= regular_hours * base_pay_rate;
  overtime_hours = work_hours - regular_hours;
  overtime_wages = overtime_hours * overtime_pay_rate;
  total_wages = regular_wages + overtime_wages;

  cout << "Regular wages " << regular_wages << endl;
  cout << "Overtime wages " << overtime_wages << endl;
  cout << "Total wages " << total_wages << endl;

}