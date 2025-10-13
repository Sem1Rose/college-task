#include <iostream>

using namespace std;
int main() {
  int nums[10];
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    cout << "enter num " << i + 1 << ": ";
    cin >> nums[i];
    sum += nums[i];
  }

  cout << "sum = " << sum << endl;
  cout << "average = " << sum / 10.0 << endl;

  return 0;
}