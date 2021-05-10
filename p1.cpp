// Make the program that counts the number of words that include the substring “th”.
// In this program, we are going to count the occurrence of “th” in the paragraph.  We use the paragraph as follows, which is saved as a file with the name “python.txt”.
// In order to count the number of occurrences of the keyword, we can use any kind of member function from the String class. All occurrences in a word should be counted as separate occurrences. For example, "thither" has two "th" substrings.
// Text has 13 th's confirm at end

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

bool occurence(char [], char []);

int main()
{
  char th[5] = "th";
  char read[20];
  ifstream ifs;

  ifs.open("python.txt");
  if (ifs.fail())
  {
    cerr << "File open error";
    exit(0);
  }

  if(ifs)
  {
    while (ifs >> read)
    {
      int len;
      len = strlen(read);
      for(int i = 0; i < len; i++)
      {
        if(isupper(read[i]))
        {
          read[i] = tolower(read[i]);
        }
      }
      if (occurence(read, th))
      {
        cout << read << " " << th << endl;
      }
    }
  }
}

bool occurence(char read[], char th[])
{
  if(strstr(read, th) == 0)
  {
    return true;
  }

}


