#include <iostream>

using namespace std;
int main() {
  int score;
  cout << "Enter your score: ";
  cin >> score;

  cout << "Grade: ";
  if (score < 50)
    cout << "Failed" << endl;
  else if (score < 65)
    cout << "Passed" << endl;
  else if (score < 75)
    cout << "Good" << endl;
  else if (score < 85)
    cout << "Very Good" << endl;
  else
    cout << "Excellent" << endl;

  return 0;
}