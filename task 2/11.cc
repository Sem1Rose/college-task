#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>

int *min_max_elements(int *array, int size) {
  int *min_max = new int[2];

  int smallest = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (array[i] < smallest)
      smallest = array[i];
  }
  min_max[0] = smallest;

  int largest = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (array[i] > largest)
      largest = array[i];
  }
  min_max[1] = largest;

  return min_max;
}

using namespace std;
int main() {
  int nums[50];
  for (int i = 0; i < 50; i++) {
    cout << "enter num " << i + 1 << ": ";
    cin >> nums[i];
  }

  int *minmax = min_max_elements(nums, 50);

  cout << endl << "smallest num in array: " << minmax[0] << endl;
  cout << "largest num in array: " << minmax[1] << endl;

  delete[] minmax;
  return 0;
}