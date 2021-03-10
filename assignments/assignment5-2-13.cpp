// Zhiqi Tang
// Make a program that prints the index (i, j) with the given order in the blue triangle by using the nested for loop. The index will be printed by the left to right and the top to bottom.

#include <iostream>
using namespace std;

int main()
{
  int i, j;
  const int N = 3;

  // Triangle number 1
  // The outer loop starts out with 0, and then goes to the inner loop which is 0 because j would equal i. Then, it goes back to the outer loop because 0 = 0 and prints out 1 for i. Because i is 1, the inner loop prints 0 and 1 because it is less than and equal to. It goes back to the outer loop and prints out 2, and then the inner loop prints 0, 1, 2. 
  for (i = 0; i <= 2 ; i++)
  {
    for (j = 0; j <= i ; j++)
      cout << i << " , " << j << endl;
  }

cout << "-----" << endl;

 // Triangle number 2
 // The outer look starts out with 0, and then the inner loop prints 0, 1, 2 because j is less than or equal to 2. Then, it goes back to the outer loop and prints out 1 because of i++. It goes back to the inner loop and prints out 1 and 2 because of the if condition that j has to be greater than or equal to i so 0 won't be printed out. It goes back to the outer loop and prints out 2 and then on the inner loop and prints out 2 because it is restricted.
 for (i = 0; i < N; i++)
 {
   for (j = 0; j <= 2; j++)
   if (j >= i)
   cout << i << " , " << j << endl;
 }

 cout << "-----" << endl;

// Triangle number 3
// The outer loop prints 0 and therefore the inner loop prints out 2 because of the if condition. It goes back to the outer loop and prints out 1 and goes to the inner loop and prints out 1 because 1+1=2. Because it is greater than or equal to, it also prints out 2 for j. Back to the outer loop, it prints out 2, and j will be 0, 1 and 2 because the sum of 2 and those numbers are equal to and greater than 2. 
for (i = 0; i < N; i++)
{
  for (j = 0; j < N; j++)
  if (i + j >= 2)
  cout << i << " , " << j << endl;
}

return 0;

}