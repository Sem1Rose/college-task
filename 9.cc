#include <iostream>

using namespace std;
int main() {
  float temperature;
  cout << "Enter the temperature: ";
  cin >> temperature;

  int choice;
  cout << "Choose operation:\n1) celcius to fahrenheit\n2) fahrenheit to "
          "celcius\n";
  cin >> choice;

  if (choice == 1)
    cout << temperature << "c is " << temperature * 9.0 / 5.0 + 32 << "f"
         << endl;
  else if (choice == 2)
    cout << temperature << "f is " << (temperature - 32) * 5.0 / 9.0 << "c"
         << endl;
  else
    cout << "unknown operation: " << choice << endl;

  return 0;
}