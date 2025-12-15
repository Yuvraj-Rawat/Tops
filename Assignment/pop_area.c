#include<iostream>
using namespace std;

// Function to calculate area
float areaOfRectangle(float length, float breadth) {
    return length * breadth;
}

int main() {
    float length, breadth, area;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    // Call function
    area = areaOfRectangle(length, breadth);

    cout << "Area of Rectangle = " << area << endl;

    return 0;
}

