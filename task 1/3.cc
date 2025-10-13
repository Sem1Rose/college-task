#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int side_length = 3;
  int square_perimeter = 4 * side_length;
  int square_area = side_length * side_length;

  cout << "square perimeter=" << square_perimeter << endl
       << "square area=" << square_area << endl
       << endl;

  int width = 3, height = 4;
  int rectangle_perimeter = 2 * (width + height);
  int rectangle_area = width * height;

  cout << "rectangle perimeter=" << rectangle_perimeter << endl
       << "rectangle area=" << rectangle_area << endl
       << endl;

  int a = 3, b = 4, c = 5;
  int triangle_perimeter = a + b + c;

  float s = (a + b + c) / 2.0;
  float triangle_area = sqrt(s * (s - a) * (s - b) * (s - c));

  cout << "triangle perimeter=" << triangle_perimeter << endl
       << "triangle area=" << triangle_area << endl
       << endl;

  return 0;
}