#include <iostream>

using namespace std;
int main() {
  int N;
  cin >> N;
  if (N < 0) {
    cerr << "N must be a positive integer" << endl;
    return 0;
  }

  {
    long factorial = 1;
    for (int i = N; i > 1; i--)
      factorial *= i;

    cout << factorial << endl;
  }
  {
    long factorial = 1;
    int i = N;
    while (i > 1)
      factorial *= i--;

    cout << factorial << endl;
  }
  {
    long factorial = 1;
    int i = N;
    do
      factorial *= (i == 0 ? 1 : i);
    while (i-- > 1);

    cout << factorial << endl;
  }
  return 0;
}