#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
  int nums[10];
  for (int i = 0; i < 10; i++) {
    cout << "enter num " << i + 1 << ": ";
    cin >> nums[i];
  }

  int largest = INT_MIN;
  for (int i = 0; i < 10; i++) {
    if (nums[i] > largest)
      largest = nums[i];
  }

  cout << "largest num in array: " << largest << endl;

  return 0;
}