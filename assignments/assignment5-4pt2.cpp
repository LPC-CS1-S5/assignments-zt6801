// Zhiqi Tang
// Let us assume that this file has all integer values. In this program, we will get the total number of integers we read, and the summation of all integers, the minimal and maximum value, and the average value.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream ifs;
  int N, i, num;
  double sum, avg, min, max;

  ifs.open("assignment5-4.txt");
  if (ifs.fail())
  {
    cerr << "File open error\n";
    exit(0);
  }
  
  min = 100;
  max = 0;

  while (ifs >> num)
  {
    cout << num << " was read from the file\n";
    i++;
    sum += num;

    if (num > max)
    {
      max = num;
    }
     if (num < min)
     {
       min = num;
     }

  }  
  
  if (i != 0)
  {
    avg = (sum / i);
  }

  cout << "The sum is " << sum << ", the average is " << avg << ", the maximum is " << max << ", and the minimum is " << min << "." << endl;

  // Close the file
  ifs.close();

}