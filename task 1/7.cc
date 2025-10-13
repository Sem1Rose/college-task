#include <iostream>

using namespace std;
int main() {
  float n1, n2;
  char op;
  cout << "first number: ";
  cin >> n1;
  cout << "second number: ";
  cin >> n2;
  cout << "operation (+,-,*,/): ";
  cin >> op;

  switch (op) {
  case '+':
    cout << "addition= " << n1 + n2 << endl;
    break;
  case '-':
    cout << "subtraction= " << n1 - n2 << endl;
    break;
  case '*':
    cout << "multiplication= " << n1 * n2 << endl;
    break;
  case '/':
    cout << "division= " << n1 / n2 << endl;
    break;

  default:
    cout << "unknown operation: " << op << endl;
    return 1;
  }

  return 0;
}