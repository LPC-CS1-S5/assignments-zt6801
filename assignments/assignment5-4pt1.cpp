// Zhiqi Tang
// Make a program that writes the given number N of integers to a file. The integers that we write to a file will be determined with random number generation. The number of integers N is determined by the user input. The generated N random number are stored into a file.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
  ofstream ofs;
  int N, num, sum;

  // Ask user for N integers
  cout << "Input the number of integers: ";
  cin >> N;

  // Open output file
  ofs.open("assignment5-4.txt");

  // For random number
  unsigned seed = time(0);
  srand(seed);

  // Loop
  for (int i = 0; i < N; i++)
  {
    num = (rand() % 100);

    // Write the numbers to the file
    ofs << num << endl;
  }

  // Close the file
  ofs.close();
  cout << "Done. \n";
  return 0;

}