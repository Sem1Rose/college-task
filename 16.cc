#include <iostream>

using namespace std;
int main() {
  int pyramid_height = 4;

  for (int i = 0; i < pyramid_height; i++) {
    int asterisks = i * 2 + 1;
    int spaces = (2 * pyramid_height - 1 - asterisks) / 2;

    for (int j = 0; j < spaces; j++)
      cout << ' ';
    for (int j = 0; j < asterisks; j++)
      cout << '*';

    cout << endl << endl;
  }

  return 0;
}