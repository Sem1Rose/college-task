#include <iostream>

using namespace std;
int main() {
  struct Employee {
    int number;
    float salary;
  } E1, E2, E3;

  cout << "firt employee's number: ";
  cin >> E1.number;
  cout << "firt employee's salary: ";
  cin >> E1.salary;

  cout << "second employee's number: ";
  cin >> E2.number;
  cout << "second employee's salary: ";
  cin >> E2.salary;

  cout << "third employee's number: ";
  cin >> E3.number;
  cout << "third employee's salary: ";
  cin >> E3.salary;

  cout << endl;
  cout << "employee 1: number = " << E1.number << ", salary = " << E1.salary
       << endl;
  cout << "employee 2: number = " << E2.number << ", salary = " << E2.salary
       << endl;
  cout << "employee 3: number = " << E3.number << ", salary = " << E3.salary
       << endl;

  return 0;
}