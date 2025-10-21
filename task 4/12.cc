#include <iostream>
using namespace std;

float arr_avg(int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++)
    sum += arr[i];

  return (float)sum / size;
}

int main() {
  int nums[50];
  for (int i = 0; i < 50; i++) {
    nums[i] = rand();
  }

  float avg = arr_avg(nums, 50);
  cout << "array average = " << avg << endl;

  return 0;
}