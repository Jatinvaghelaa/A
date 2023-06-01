#include <iostream>
using namespace std;

class Number {
    int num;

public:
    Number(int n) : num(n) {}

    friend Number swapNumbers(Number& num1, Number& num2);
};

Number swapNumbers(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
    return num1;
}

int main() {
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    Number number1(n1);
    Number number2(n2);

    cout << "Before swapping: Number1 = " << number1.num << ", Number2 = " << number2.num << endl;

    Number result = swapNumbers(number1, number2);

    cout << "After swapping: Number1 = " << result.num << ", Number2 = " << number2.num << endl;

    return 0;
}

