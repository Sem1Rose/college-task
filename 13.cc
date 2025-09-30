#include <iostream>

using namespace std;
int main() {
  int N;
  cin >> N;

  int count = 0;
  for (int i = 5; i <= N; i++)
    if (!(i % 5))
      count++;

  cout << count << endl;

  return 0;
}