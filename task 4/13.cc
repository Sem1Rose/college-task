#include <iostream>
using namespace std;

float arr_even_count(int *arr, int size) {
  int count = 0;
  for (int i = 0; i < size; i++)
    if (!(arr[i] & 1))
      count++;

  return count;
}

int main() {
  int nums[50];
  for (int i = 0; i < 50; i++) {
    nums[i] = rand();
  }

  float even_count = arr_even_count(nums, 50);
  cout << "num even elements = " << even_count << endl;

  return 0;
}