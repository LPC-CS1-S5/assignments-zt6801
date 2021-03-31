#include <iostream>
using namespace std;

void getInput (int &, int &)
int isSame (int, int)
int Division (int &, int &)
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

  while(1)
  {
    getinput(num1, num2);
    if (isSame(num1, num2))
    break;
    div = Division(num1, num2);
    writefile(ofs, div);
  }
}

void getInput (int &num1, int &num2)
{
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
}

int isSame(int num1, int num2)
{
  if (n1 == n2)
  return 1;
  else
  return 0;
}

int Division(int &n1, int &n2)
{
  div;
  if (n1 > n2)
    div = (n1 / n2);
    return div;
  else
    div = (n2 / n1);
    return div;
}

void fileWrite (ofstream &ofs, int div)
{
  ofs << div << endl;
  if (ofs.fail())
  {
    cerr << "File Write Error ";
    exit(0);
  }
}