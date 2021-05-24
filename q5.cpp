#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

const unsigned short N=5;
struct Scores{     
      double sc[N];     
      string grade;
};

struct Grade{    
      string first;    
      string last;   
      string ssn;   
      Scores score;
};

Grade g;

int main()
{
  ifstream ifs;
  string readline, buf;
  stringstream ss;

  ifs.open("grades.txt");
  ifs >> readline;
  ss << readline;

  getline(ss, buf, ',');
  g.first = buf;

  getline(ss, buf, ',');
  g.last = buf;

  getline(ss, buf, ',');
  g.ssn = stoi(buf);

  int cnt = 0; 
  for(int i = 0; i < 5; i++)
  {
    getline(ss, buf, ',');
    g.score.sc[cnt];
    cnt++;
  }

  getline(ss, buf, ',');
  g.score.grade;

  ofstream ofs;
  ofs.open("grades.bin");

  for(int i = 0; i < 16; i++)
  {
    

    ofs.write((char *)&g, sizeof(g));
    cout << sizeof(g) << " bytes wrote to the file.\n";
    ofs.close();
  }



}