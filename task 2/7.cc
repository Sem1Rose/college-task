#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
  int nums[50];
  for (int i = 0; i < 50; i++) {
    nums[i] = rand();
    cout << "item " << i << "= " << nums[i] << endl;
  }

  int largest = INT_MIN;
  for (int i = 0; i < 10; i++) {
    if (nums[i] > largest)
      largest = nums[i];
  }

  cout << "largest num in array: " << largest << endl;

  int smallest = INT_MAX;
  for (int i = 0; i < 10; i++) {
    if (nums[i] < smallest)
      smallest = nums[i];
  }

  cout << "smallest num in array: " << smallest << endl;

  return 0;
}