#include <iostream>
using namespace std;

int main() {
  int x, y, result;  
  char operation;

  cout << "Enter math operator (+ or -): ";
  cin >> operation;  // To store the operator

  cout << "Enter first number: ";
  cin >> x;

  cout << "Enter second number: ";
  cin >> y;

  if (operation == '+') {
    result = x + y;
  } else if (operation == '-') {
    result = x - y;
  } else {
    cout << "Invalid operator!" << endl;
    return 1; // Exit early if the operator is invalid
  }

  cout << "Result: " << result << endl;
  return 0;
}
