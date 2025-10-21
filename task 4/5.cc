#include <iostream>

using namespace std;

int sum_range(int a, int b) {
  int sum = 0;
  for (int i = a; i <= b; i++)
    sum += i;

  return sum;
}

int main() {
  int a, b;
  cout << "lower: ";
  cin >> a;
  cout << "upper: ";
  cin >> b;

  cout << "sum = " << sum_range(a, b) << endl
       << "average = " << (float)sum_range(a, b) / (b - a + 1) << endl;

  return 0;
}