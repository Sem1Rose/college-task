#include <iostream>

using namespace std;
int main() {
  int nums[20];
  int even_sum = 0;
  int even_count = 0;
  for (int i = 0; i < 20; i++) {
    cout << "enter num " << i + 1 << ": ";
    cin >> nums[i];

    if (!(nums[i] & 1)) {
      even_sum += nums[i];
      even_count++;
    }
  }

  cout << "even sum = " << even_sum << endl;
  cout << "even average = " << (float)even_sum / even_count << endl;

  return 0;
}