#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a, b;
  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin >> b;

  swap(a, b);
  cout << "new values: a = " << a << ", b = " << b << endl;
  return 0;
}