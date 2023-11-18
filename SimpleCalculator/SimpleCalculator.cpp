#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // Prompt user for input
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform calculations based on the operator
    switch (op) {
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
        if (num2 != 0) {
            cout << "Result: " << num1 / num2;
        }
        else {
            cout << "Error! Division by zero is not allowed.";
        }
        break;
    default:
        cout << "Invalid operator!";
        break;
    }

    return 0;
}