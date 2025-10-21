#include <iostream>

using namespace std;

int even_sum(int a, int b, int count) {
  int sum = 0;
  for (int i = a + ((a & 1) ? 1 : 0); i <= b; i += 2) {
    count++;
    sum += i;
  }

  return sum;
}

int main() {
  int a, b;
  cout << "lower: ";
  cin >> a;
  cout << "upper: ";
  cin >> b;

  int count = 0;
  int s = even_sum(a, b, count);
  cout << "sum = " << s << endl << "average = " << (float)s / count << endl;

  return 0;
}