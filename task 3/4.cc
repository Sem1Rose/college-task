#include <iostream>

using namespace std;
int main() {
  struct Product {
    string name;
    int model;
    float price;
  } P1, P2;

  cout << "firt product's name: ";
  cin >> P1.name;
  cout << "firt product's model: ";
  cin >> P1.model;
  cout << "firt product's price: ";
  cin >> P1.price;

  cout << "second product's name: ";
  cin >> P2.name;
  cout << "second product's model: ";
  cin >> P2.model;
  cout << "second product's price: ";
  cin >> P2.price;

  cout << endl;
  cout << "product 1: name = " << P1.name << ", model = " << P1.model
       << ", price = " << P1.price << endl;
  cout << "product 2: name = " << P2.name << ", model = " << P2.model
       << ", price = " << P2.price << endl;

  return 0;
}