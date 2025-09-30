#include <iostream>

#define PI 3.1415

using namespace std;
int main() {
  int R = 3;

  float area = PI * R * R, perimiter = 2 * PI * R;

  cout << "area=" << area << endl << "perimeter=" << perimiter << endl;

  return 0;
}