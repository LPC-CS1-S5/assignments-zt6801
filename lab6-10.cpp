#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &, int &);
void swap(int &, int &, int &);
void swap(int &, int &, int &, int &);
void getinput(int &);
void getinput(int &, int &);
void getinput(int &, int &, int &);
void getinput(int &, int &, int &, int &);
int tmp;

int main()
{
  int num;
  int val1,  val2, val3, val4;

  do {
    getinput(num);
    switch(num)
    {
      case 2:
        getinput(val1, val2);
        cout << "Input Values: " << setw(5) << val1 << setw(5) << val2 << endl;
        swap(val1, val2);
        cout << "Swapped Values: " << setw(5) << val1 << setw(5) << val2 << endl;
        break;

      case 3:
        getinput(val1, val2, val3);
        cout << "Input Values: " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << endl;
        swap(val1, val2, val3);
        cout << "Swapped Values: " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << endl;
        break;
      
      case 4:
        getinput(val1, val2, val3, val4);
        cout << "Input Values: " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
        swap(val1, val2, val3, val4);
        cout << "Swapped Values: " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
        break;

      default:
        break;
    }
  } while (num != -1);
}

void getinput(int &n1)
{
  cout << "Enter your value: ";
  cin >> n1;
}

void getinput(int &n1, int &n2)
{
  cout << "Enter your first value: ";
  cin >> n1;
  cout << "Enter your second value: ";
  cin >> n2;
}

void swap(int &n1, int &n2)
{
  tmp = n1;
  n1 = n2;
  n2 = tmp;
}

void getinput(int &n1, int &n2, int &n3)
{
  cout << "Enter your first value: ";
  cin >> n1;
  cout << "Enter your second value: ";
  cin >> n2;
  cout << "Enter your third value: ";
  cin >> n3;
}

void swap(int &n1, int &n2, int&n3)
{
  int min, max;

  min = n1;
  if (min > n2)
    min = n2;
  if (min > n3)
    min = n3;

  max = n1;
  if (max < n2)
    max = n2;
  if (max < n3)
    max = n3;

  // Assigning values of right to the left variables to return
  n1 = min;
  n2 = max-min;
  n3 = max;
    
}

void getinput(int &n1, int &n2, int &n3, int &n4)
{
  cout << "Enter your first value: ";
  cin >> n1;
  cout << "Enter your second value: ";
  cin >> n2;
  cout << "Enter your third value: ";
  cin >> n3;
  cout << "Enter your fourth value: ";
  cin >> n4;
}

void swap(int &n1, int &n2, int &n3, int &n4)
{
  tmp = n1;
  n1 = n2;
  n2 = n3;
  n3 = n4;
  n4 = tmp;
}
