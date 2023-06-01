#include <iostream>
using namespace std;
// for class value
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}
// divide by zero error
int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

double divide(double a, double b) {
    if (b != 0.0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    int choice;
    double num1, num2;
//ask user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
// using switch case case for choice
    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

