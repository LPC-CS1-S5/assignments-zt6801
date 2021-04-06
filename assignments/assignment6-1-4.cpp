// Write a program that calculates the summation of the given N numbers with removing the minimum and maximum numbers
// [example] N = 5, [2, 1 ,5, 10, 7] = 2 + 5 + 7 = 14
// the function int getsum(int N) needs to get the N user inputs and then calculate the summation of list with removing the minimum and maximum value

#include <iostream>
using namespace std;

int getsum(int);  // Function prototype is called getsum because it should always say the action it is going to do

int main()
{
  int n, res;
  cout << "This program will calculate the the summation of user inputted data subtracting the minimum and maximum.";
  cout << "\nEnter your input (amount of number you would like): ";
  cin >> n;

  res = getsum(n);    // Send n into getsum function
  cout << "The summation result: " << res << endl;;
  return 0;
}

int getsum(int n)
{
  int i;
  int max, min, num, sum;

  for (i = 0; i < n; i++) // For loop to ask for each number in n numbers
  {
    cout << "Enter your " << i + 1 << "th number: ";
    cin >> num;
    sum += num; // Find accumulated sum
    if (i == 0) // Find min and max
    {
      min = num;
      max = num;
    }
    if (min > num)
      min = num;
    if (max < num)
      max = num;

  }
  return sum - min - max; // return sum-min-max (could also use sum= sum-min-max and then return sum)
}
// I felt like this problem was a lot more straightforward than the other ones maybe because this one only has two functions. I had more problems recreating the other two assignments. 