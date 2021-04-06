// Zhiqi Tang
// Make a program that calculates the scores of students. It asks the user for the number of students and the number of scores per student. 
// Program Requirements: 
// User input for the number of students and scores.
// Input the students name and N scores.
// Calculate the average score for each student
// Print out the student name, the sum of scores, and the average

#include <iostream>
using namespace std;

int main(){

  int numStu, numScores;
  string stuName;
  double score, sum, average;

  cout << "Enter the number of students and score: ";
  cin >> numStu >> numScores;

  for (int i = 0; i < numStu; i++)
  {
    cout << "Enter the student's name: ";
    cin >> stuName;
    cout << "Student's name: " << stuName << "\t";
    sum = 0;
    for (int j = 0; j < numScores; j++)
    {
      cout << "Enter the student's scores: ";
      cin >> score;
      cout << "Score " << j + 1 << " : " << score << endl;
      sum += score;
    }
    average = sum / numScores;
    cout << "Sum of scores " << sum << "\t";
    cout << "Average of scores " << average << "\n";
  }
  return 0;
}