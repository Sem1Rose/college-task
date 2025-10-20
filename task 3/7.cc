#include <iostream>

using namespace std;
int main() {
  struct Product {
    int model;
    string name;
    float price;
  } product_db[5];

  for (int i = 0; i < 5; i++) {
    cout << "enter product " << i + 1 << " model: ";
    cin >> product_db[i].model;
    cout << "enter product " << i + 1 << " name: ";
    cin >> product_db[i].name;
    cout << "enter product " << i + 1 << " price: ";
    cin >> product_db[i].price;
  }

  cout << endl;
  for (int i = 0; i < 5; i++) {
    cout << "product " << i + 1 << " model: " << product_db[i].model
         << ", name: " << product_db[i].name
         << ", price: " << product_db[i].price << endl;
  }

  return 0;
}