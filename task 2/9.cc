#include <iostream>

using namespace std;
int main() {
  int nums[6];
  for (int i = 0; i < 6; i++) {
    cout << "enter item " << i + 1 << ": ";
    cin >> nums[i];
  }

  cout << "items divisible by 5:" << endl;
  int div_by_5_sum = 0;
  int count = 0;
  for (int i = 0; i < 6; i++) {
    if (!(nums[i] % 5)) {

      cout << nums[i] << endl;
      div_by_5_sum += nums[i];
      count++;
    }
  }
  cout << "sum = " << div_by_5_sum << endl;
  cout << "average = " << (float)div_by_5_sum / count << endl;
}