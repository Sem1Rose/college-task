#include <iostream>

using namespace std;
int main() {
  int A = 1, B = 2, C = 0;
  if (A >= B && A > C)
    cout << "A is the greatest" << endl;
  if (B > A && B >= C)
    cout << "B is the greatest" << endl;
  if (C >= A && C > B)
    cout << "C is the greatest" << endl;

  if (A >= B && A > C)
    cout << "A is the greatest" << endl;
  else if (B > A && B >= C)
    cout << "B is the greatest" << endl;
  else if (C >= A && C > B)
    cout << "C is the greatest" << endl;
  else
    cout << "the numbers are equal" << endl;

  if (A > B) {
    if (A > C)
      cout << "A is the greatest" << endl;
    else
      cout << "C is the greatest" << endl;
  } else if (B > A) {
    if (B > C)
      cout << "B is the greatest" << endl;
    else
      cout << "C is the greatest" << endl;
  } else {
    if (C > A)
      cout << "C is the greatest" << endl;
    else
      cout << "A,B are the greatest" << endl;
  }

  return 0;
}