#include <iostream>

using namespace std;
int main() {
  struct Point {
    float x, y;
  } P1, P2, P3;

  cout << "firt point's x: ";
  cin >> P1.x;
  cout << "firt point's y: ";
  cin >> P1.y;

  cout << "second point's x: ";
  cin >> P2.x;
  cout << "second point's y: ";
  cin >> P2.y;

  P3.x = P1.x + P2.x;
  P3.y = P1.y + P2.y;

  cout << endl;
  cout << "P1 + P2 = (" << P3.x << ", " << P3.y << ")" << endl;

  return 0;
}