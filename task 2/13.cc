#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>

int calc_array_sum(int *array, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++)
    sum += array[i];

  return sum;
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

  int array_sum = calc_array_sum(nums, n);
  cout << endl << "array sum: " << array_sum << endl;
  cout << "array average: " << (float)array_sum / n << endl;

  delete[] nums;
  return 0;
}