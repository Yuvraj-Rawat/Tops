#include <iostream>
using namespace std;

int main() {
    int rows, i, j;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++) {          // Outer loop for rows
        for (j = 1; j <= i; j++) {         // Inner loop for columns
            cout << "* ";                  // Print star
        }
        cout << endl;                      // Move to next line
    }

    return 0;
}

