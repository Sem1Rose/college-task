#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int N;
  cin >> N;
  if (N < 0) {
    cerr << "N must be a positive integer" << endl;
    return 0;
  }

  for (int i = 0; i <= N; i++) {
    cout << i << '\t' << pow(i, 2) << '\t' << pow(i, 3) << endl;
  }

  return 0;
}