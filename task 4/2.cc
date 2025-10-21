#include <iostream>

using namespace std;

int *operations(int a, int b) {
  int *ops = new int[3];

  ops[0] = a + b;
  ops[1] = a - b;
  ops[2] = a * b;

  return ops;
}

int main() {

  int a, b;
  cout << "first number: ";
  cin >> a;
  cout << "second number: ";
  cin >> b;

  int *result = operations(a, b);

  cout << "sum: " << result[0] << endl
       << "difference: " << result[1] << endl
       << "product: " << result[2] << endl;

  delete[] result;

  return 0;
}