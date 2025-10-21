#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int arr_max(int *arr, int size) {
  int largest = arr[0];

  for (int i = 1; i < size; i++)
    largest = max(largest, arr[i]);

  return largest;
}

int main() {
  int nums[50];
  for (int i = 0; i < 50; i++) {
    nums[i] = rand();
  }

  cout << "largest num in array = " << arr_max(nums, 50) << endl;

  return 0;
}