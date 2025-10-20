#include <iostream>

using namespace std;
int main() {
  struct Student {
    int stno;
    string stname;
    string staddress;
  } students_db[10];

  for (int i = 0; i < 5; i++) {
    cout << "enter student " << i + 1 << " stno: ";
    cin >> students_db[i].stno;
    cout << "enter student " << i + 1 << " stname: ";
    cin >> students_db[i].stname;
    cout << "enter student " << i + 1 << " staddress: ";
    cin >> students_db[i].staddress;
  }

  cout << endl;
  for (int i = 0; i < 5; i++) {
    cout << "student " << i + 1 << " stno: " << students_db[i].stno
         << ", stname: " << students_db[i].stname
         << ", staddress: " << students_db[i].staddress << endl;
  }

  return 0;
}