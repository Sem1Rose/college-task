#include <iostream>

using namespace std;
int main() {
  int A[5], B[5];
  for (int i = 0; i < 5; i++) {
    cout << "enter item " << i + 1 << ": ";
    cin >> A[i];
    B[i] = A[i] * 5;
  }

  cout << "A\tB" << endl;
  for (int i = 0; i < 5; i++)
    cout << A[i] << "\t" << B[i] << endl;
}