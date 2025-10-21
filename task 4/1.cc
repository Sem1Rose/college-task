#include <iostream>
using namespace std;

float sum(float a, float b) { return a + b; }
float difference(float a, float b) { return a - b; }
float product(float a, float b) { return a * b; }

int main() {
  float a, b;
  cout << "first number: ";
  cin >> a;
  cout << "second number: ";
  cin >> b;

  cout << endl;

  cout << "sum: " << sum(a, b) << endl
       << "difference: " << difference(a, b) << endl
       << "pproduct: " << product(a, b) << endl;

  return 0;
}