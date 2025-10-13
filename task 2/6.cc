#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
  int nums[10];
  for (int i = 0; i < 10; i++) {
    cout << "enter num " << i + 1 << ": ";
    cin >> nums[i];
  }

  int smallest = INT_MAX;
  for (int i = 0; i < 10; i++) {
    if (nums[i] < smallest)
      smallest = nums[i];
  }

  cout << "smallest num in array: " << smallest << endl;

  return 0;
}