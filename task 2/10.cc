#include <iostream>

using namespace std;
int main() {
  int month_sales[28];
  int total_sales = 0;
  for (int i = 0; i < 28; i++) {
    cout << "enter day " << i + 1 << " sales: ";
    cin >> month_sales[i];
    total_sales += month_sales[i];
  }

  cout << endl;

  for (int week = 0; week < 4; week++) {
    int week_sum = 0;
    for (int week_day = 0; week_day < 7; week_day++) {
      week_sum += month_sales[week * 7 + week_day];
    }

    cout << "total sales of week " << week + 1 << " = " << week_sum << endl;
    cout << "average sales of week " << week + 1 << " = " << week_sum / 7.0
         << endl
         << endl;
  }

  cout << endl << "total sales of the month: " << total_sales << endl;
  cout << "average sales of the month: " << total_sales / 28.0 << endl;
}