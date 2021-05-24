#include <iostream>
#include <cctype>
#include <cstring>
#include <sstream>
using namespace std;

bool findOccurence(string, int, string);

int main ()
{
  string  userinput;
  string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

  cout << "Enter user string "; 
  cin >> userinput;

  int N = words.length();
  int M = userinput.length();
  stringstream s(words);
  string word;

  int pos = 0;
  int i = 0;

  while (s>> word)
  {
    if (findOccurence(words, pos, userinput))
    {
      cout << "Found at " << pos + 1 << endl;
      i = pos + 1;
    }
  }
}

bool findOccurence(string words, int pos, string userinput)
{
  int i = 0;
  do 
  {
      pos = words.find(userinput, i);
      if (pos)
      {
        return true;
      }
    } while (pos != -1);
}
