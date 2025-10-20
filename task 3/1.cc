#include <iostream>

using namespace std;
int main() {
  struct Volume {
    float length, width, height;
  };

  Volume volume = {4.65, 4.2, 3};

  float v = volume.length * volume.width * volume.height;

  cout << "volume = " << v << endl;

  return 0;
}