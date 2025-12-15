#include<iostream>
using namespace std;

int main() {

    int a = 10, b = 5;
    bool x = true, y = false;

    // ?? Arithmetic Operators
    cout << "=== Arithmetic Operators ===" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // ?? Relational Operators
    cout << "\n=== Relational Operators ===" << endl;
    cout << "(a == b) = " << (a == b) << endl;
    cout << "(a != b) = " << (a != b) << endl;
    cout << "(a > b) = " << (a > b) << endl;
    cout << "(a < b) = " << (a < b) << endl;
    cout << "(a >= b) = " << (a >= b) << endl;
    cout << "(a <= b) = " << (a <= b) << endl;

    // ?? Logical Operators
    cout << "\n=== Logical Operators ===" << endl;
    cout << "(x && y) = " << (x && y) << endl;   // AND
    cout << "(x || y) = " << (x || y) << endl;   // OR
    cout << "(!x) = " << (!x) << endl;           // NOT

    // ?? Bitwise Operators
    cout << "\n=== Bitwise Operators ===" << endl;
    cout << "(a & b) = " << (a & b) << endl;     // AND
    cout << "(a | b) = " << (a | b) << endl;     // OR
    cout << "(a ^ b) = " << (a ^ b) << endl;     // XOR
    cout << "(~a) = " << (~a) << endl;           // NOT
    cout << "(a << 1) = " << (a << 1) << endl;   // Left shift
    cout << "(a >> 1) = " << (a >> 1) << endl;   // Right shift

    return 0;
}

