#include <iostream>
using namespace std;

int factorial(int n) {
  int result = 1;
  for (int i = 2; i <= n; i++)
    result *= i;
  return result;
}

int main() {
  int n;
  cout << "enter the number: ";
  cin >> n;

  cout << endl;
  cout << "factorial = " << factorial(n) << endl;

  return 0;
}