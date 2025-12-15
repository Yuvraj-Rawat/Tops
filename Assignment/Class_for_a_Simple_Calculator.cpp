#include <iostream>
using namespace std;

class Calculator {
public:
    // Function for addition
    float add(float a, float b) {
        return a + b;
    }

    // Function for subtraction
    float subtract(float a, float b) {
        return a - b;
    }

    // Function for multiplication
    float multiply(float a, float b) {
        return a * b;
    }

    // Function for division
    float divide(float a, float b) {
        if (b == 0) {
            cout << "Error! Division by zero is not allowed.\n";
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;   // Creating object

    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}

