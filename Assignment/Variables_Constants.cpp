#include<iostream>
using namespace std;

int main() {

    // ?? Constant Declaration
    const float PI = 3.14159;   // Constant value (cannot be changed)

    // ?? Variable Declarations of Different Data Types
    int a = 10, b = 3;
    float x = 5.5, y = 2.3;
    char grade = 'A';
    string name = "Yuvraj";
    bool isPassed = true;

    // ?? Performing Operations
    int sum = a + b;
    int remainder = a % b;
    float product = x * y;
    float circleArea = PI * x * x;   // using constant PI

    // ?? Displaying Results
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Sum of a and b = " << sum << endl;
    cout << "Remainder when a divided by b = " << remainder << endl;
    cout << "Product of x and y = " << product << endl;
    cout << "Area of circle with radius " << x << " = " << circleArea << endl;
    cout << "Passed Status: " << isPassed << endl;

    return 0;
}

