#include <iostream>
#include <fstream>
using namespace std;

void getInput(int &, int &);
int isSame(int, int);
int Division(int, int);
void fileWrite(ofstream &, int);

int main()
{
  int num1, num2;
  int div;

  ofstream ofs;
  ofs.open("question5.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error";
    exit(0);
  }

    while (1)
    {
		getInput(num1, num2);
		if (isSame(num1, num2))
			break;
		div = Division(num1, num2);
		cout << "div " << div << endl;
		fileWrite(ofs, div);
    }
}

void getInput (int &num1, int &num2)
{
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
}

int isSame(int num1, int num2)
{
  if (num1 == num2)
  return 1;
  else
  return 0; 
}

int Division(int n1, int n2)
{
  int div;
  if (n1 > n2)
    div = (n1 / n2);
    return div;
  if (n2 > n1)
    div = (n2 / n1);
    return div;
}

void fileWrite (ofstream &ofs, int div)
{
  ofs << div << endl;
		cout << "filewirte div " << div << endl;
  if (ofs.fail())
  {
    cerr << "File Write Error ";
    exit(0);
  }
}