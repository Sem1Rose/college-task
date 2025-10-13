#include <iostream>

using namespace std;
int main() {
  int pyramid_height = 1;

  for (int i = 0; i < pyramid_height; i++) {
    for (int j = 0; j < pyramid_height * 2 - 1; j++)
      if (j < pyramid_height - i - 1 || j > pyramid_height + i - 1)
        cout << ' ';
      else
        cout << '*';

    cout << endl;
  }

  return 0;
}