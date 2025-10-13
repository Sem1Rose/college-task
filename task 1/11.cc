#include <iostream>

using namespace std;
int main() {
  int sum = 0, count = 0;

  for (int i = 50; i <= 100; i++, count++)
    sum += i;

  cout << "sum= " << sum << endl << "average= " << (float)sum / count << endl;

  return 0;
}