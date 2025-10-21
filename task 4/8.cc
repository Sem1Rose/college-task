#include <iostream>
using namespace std;

int Min(int a, int b, int c) { return min(a, min(b, c)); }
int Max(int a, int b, int c) { return max(a, max(b, c)); }

int main() {
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  cout << "Min = " << Min(a, b, c) << ", Max = " << Max(a, b, c) << endl;

  return 0;
}