#include <iostream>

using namespace std;
int main() {
  float n1, n2;
  char op;
  cout << "first number: ";
  cin >> n1;
  cout << "second number: ";
  cin >> n2;
  cout << "operation (A,S,M,D): ";
  cin >> op;

  if (op == 'A')
    cout << "addition= " << n1 + n2 << endl;
  else if (op == 'S')
    cout << "subtraction= " << n1 - n2 << endl;
  else if (op == 'M')
    cout << "multiplication= " << n1 * n2 << endl;
  else if (op == 'D')
    cout << "division= " << n1 / n2 << endl;
  else {
    cout << "unknown operation: " << op << endl;
    return 1;
  }

  return 0;
}