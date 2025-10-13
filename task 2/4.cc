#include <iostream>

const char *days[7]{"saturday",  "sunday",   "monday", "tuesday",
                    "wednesday", "thursday", "friday"};

using namespace std;
int main() {
  int day_sales[7];
  int sum = 0;
  for (int i = 0; i < 7; i++) {
    cout << "enter " << days[i] << " sales : ";
    cin >> day_sales[i];

    sum += day_sales[i];
  }

  cout << "sum of the sales = " << sum << endl;
  cout << "average of the sales = " << sum / 7.0 << endl;

  return 0;
}