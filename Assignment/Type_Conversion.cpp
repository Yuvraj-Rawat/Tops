#include<iostream>
using namespace std;

int main() {

    // ?? Implicit Type Conversion (done automatically by compiler)
    int intNum = 10;
    float floatNum = 5.5;

    float result1 = intNum + floatNum; // int is automatically converted to float
    cout << "Implicit Conversion Result (int + float): " << result1 << endl;

    // ?? Explicit Type Conversion (done manually by programmer)
    double num1 = 9.78;
    int num2;

    num2 = (int)num1;  // using C-style casting
    cout << "Explicit Conversion using (int): " << num2 << endl;

    // Another example using static_cast<>
    double a = 7.3, b = 2.0;
    int quotient = static_cast<int>(a / b);
    cout << "Explicit Conversion using static_cast<int>: " << quotient << endl;

    return 0;
}

