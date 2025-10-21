#include <iostream>
using namespace std;

int arr_sum(int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++)
    sum += arr[i];

  return sum;
}

int main() {
  int nums[50];
  for (int i = 0; i < 50; i++) {
    nums[i] = rand();
  }

  float sum = arr_sum(nums, 50);
  cout << "array average = " << sum << endl;

  return 0;
}