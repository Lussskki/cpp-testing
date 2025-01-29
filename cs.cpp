#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // Prompt the user to enter an operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the operation based on the operator
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;
        default:
            // If the operator is not one of the above
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}