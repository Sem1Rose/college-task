#include <iostream>

using namespace std;
int main() {
  int nums[10];
  int odd_id_sum = 0;
  for (int i = 0; i < 10; i++) {
    cout << "enter num " << i + 1 << ": ";
    cin >> nums[i];

    if (!(i & 1)) {
      odd_id_sum += nums[i];
    }
  }

  cout << "odd index sum = " << odd_id_sum << endl;
  cout << "odd index average = " << odd_id_sum / 5.0 << endl;

  return 0;
}