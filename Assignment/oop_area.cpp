#include<iostream>
using namespace std;

// Class definition
class Rectangle {
    float length, breadth;  // Data members (attributes)

public:
    // Function to take input
    void input() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
    }

    // Function to calculate area
    float area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;   // Create object of Rectangle class

    rect.input();     // Call member function to take input
    cout << "Area of Rectangle = " << rect.area() << endl;  // Call member function to compute area

    return 0;
}

