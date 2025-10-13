#include <iostream>

using namespace std;
int main() {
  int N;
  cin >> N;

  int sum = 0;
  for (int i = 2; i <= N; i += 2)
    sum += i;

  cout << sum << endl;

  return 0;
}