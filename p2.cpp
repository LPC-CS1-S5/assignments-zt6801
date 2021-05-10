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

  if (ABC(email))
  {
    cout << "Your email starts with alphabet letters" << endl;
  }
  if(len(email))
  {
    cout << "Your email is between 6-14 letters" << endl;
  }
  if (domname(email))
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
  if(ispunct(email))
  {
    
  }
  while (email != '@')
  {
    i++;
  }
  if ((i > 5) && (i < 15))
  {
    return true;
  }
  else
  {
    cout << "Your email is not within 6-14 long, sorry!" << endl;
  }
}