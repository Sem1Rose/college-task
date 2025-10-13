#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>

int max_element(int *array, int size) {
  int largest = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (array[i] > largest)
      largest = array[i];
  }

  return largest;
}

int min_element(int *array, int size) {
  int smallest = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (array[i] < smallest)
      smallest = array[i];
  }

  return smallest;
}

using namespace std;
int main() {
  int n;
  cout << "enter array size: ";
  cin >> n;

  int *nums = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "enter num " << i + 1 << ": ";
    cin >> nums[i];
  }

  cout << endl << "smallest num in array: " << min_element(nums, n) << endl;
  cout << "largest num in array: " << max_element(nums, n) << endl;

  delete[] nums;
  return 0;
}