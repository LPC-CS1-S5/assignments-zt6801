#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool ABC(char[]); // ID starts with alphabet char
bool len(char[]); // Length of ID
bool domname(char[]); // check domain name

int main()
{
  char email[20];

  cout << "Please enter your email: " << endl;
  cin >> email;

  
  if ((ABC(email)) && (len(email)) && (domname(email)))
  {
    cout << "Congratulations. Your email is valid." << endl;
  }
  else
  {
    cout << "Sorry. Your email is not valid." << endl;
  }
}

bool ABC(char email[])
{
  if (isalpha(email[0]))
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool len(char email[])
{
  int i = 0;
  while (email[i] != '@')
  {
    i++;
  }
  if ((i >5) && (i < 15))
    {
      return true;
    }
    else
    {
      return false;
    }
  }

bool domname(char email[])
{
  char domains[] = "com, org, edu, net, gov";
  int j = (strlen(email));
  for (int i = 0; i < j; i++)
  {
    if(strcmp(domains, email) == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}