#include <iostream>
using namespace std;
class Shopping {
public:
  int grocery_cost;
  int electronic_cost;
  int clothing_cost;
  int calculate_bill() {
    return grocery_cost + electronic_cost + clothing_cost;
  }
  int calculate_grocery_bill() {
    return grocery_cost;
  }
  int calculate_electronic_bill() {
    return electronic_cost;
  }
  int calculate_clothing_bill() {
    return clothing_cost;
  }
};
int main() {
  Shopping shopping;
  cout << "Enter the cost of grocery items: ";
  cin >> shopping.grocery_cost;

  cout << "Enter the cost of electronic gadgets: ";
  cin >> shopping.electronic_cost;

  cout << "Enter the cost of clothes: ";
  cin >> shopping.clothing_cost;

  int total_bill = shopping.calculate_bill();
  int grocery_bill = shopping.calculate_grocery_bill();
  int electronic_bill = shopping.calculate_electronic_bill();
  int clothing_bill = shopping.calculate_clothing_bill();

  cout << "Total bill: " << total_bill << endl;
  cout << "Grocery bill: " << grocery_bill << endl;
  cout << "Electronic bill: " << electronic_bill << endl;
  cout << "Clothing bill: " << clothing_bill << endl;

  return 0;
}
