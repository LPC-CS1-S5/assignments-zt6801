// We are going to make a program that checks the validity of the email accounts. The requirement of an email account is as follows: emailid@organization.com
// The id of the email must be starting with the alphabet characters
//The length of id must be greater than 5 and less than 15
//The domain name should be one of the list {com, org, edu, net, and gov}
//The program asks for the user email string and then split the id, organization name, and domain name. After that, check the validity of the email string base on the above requirements.

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

  if (ABC(email)) // this is right
  {
    cout << "Your email starts with alphabet letters" << endl;
  }
  if(len(email))  // this is worng
  {
    cout << "Your email is between 6-14 letters" << endl;
  }
  if (domname(email)) // this is wrong
  {
    cout << "Your email has the right domain name" << endl;
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
    cout << "Your email does not start with a letter, sorry." << endl;
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
      cout << "Your email is not within 6-14, sorry." << endl;
      return false;
    }
  }

bool domname(char email[])
{
  char domains[] = "com, org, edu, net, gov";
  int j = (strlen(email));
  for (int i = 0; i < j; i++)
  {
    if(strcmp(domains, email))
    {
      return true;
    }
    else
    {
      cout << "Sorry... please end your email with a domain." << endl;
      return false;
    }
  }
}