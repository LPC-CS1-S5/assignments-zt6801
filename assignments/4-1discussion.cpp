#include <iostream>
using namespace std;

int main() {

  int i, j;

  i = 10;
  j = 20;

  // nested if
  if (i == 10 ){
    if (j == 20 ){
      cout << "both statements matchout" << endl;
      }
  }

  // if /else if
  if(i == 10){
    cout<< "i is euqal to 10"<<endl;
  }else if (j==20){
    cout<<"i is wrong, but j is equal to 20"<<endl;
  }else{
    return(0);
  }

}
 

