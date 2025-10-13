#include <iostream>

using namespace std;
int main() {
  int x, y;
  cin >> x >> y;

  cout << "x+y=" << x + y << endl
       << "x-y=" << x - y << endl
       << "x*y=" << x * y << endl
       << "x/y=" << x / y << endl
       << "float(x/y)=" << (float)x / y << endl;

  return 0;
}