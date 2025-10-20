#include <iostream>

void swap(int *array, int a, int b) {
  int temp = array[a];
  array[a] = array[b];
  array[b] = temp;
}

// Cocktail shaker sort
using namespace std;
int main() {
  int nums[10];
  for (int i = 0; i < 10; i++) {
    cout << "enter item " << i + 1 << ": ";
    cin >> nums[i];
  }

  cout << endl << "begin sort..." << endl;
  bool swapped = true;
  while (swapped) {
    swapped = false;
    for (int i = 0; i < 9; i++) {
      if (nums[i] > nums[i + 1]) {
        swapped = true;
        swap(nums, i, i + 1);
      }
    }

    if (!swapped)
      break;

    swapped = false;
    for (int i = 8; i >= 0; i--) {
      if (nums[i] > nums[i + 1]) {
        swapped = true;
        swap(nums, i, i + 1);
      }
    }
  }

  cout << "sorted array:" << endl;
  for (int i = 0; i < 10; i++)
    cout << nums[i] << endl;
}
