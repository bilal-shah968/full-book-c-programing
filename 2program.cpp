#include <iostream>
using namespace std;

// Function to display the multiplication table for a given number
void table(int n) {
    // Local function to print the table
    auto show = [n]() {
        for (int i = 1; i <= 10; ++i) {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    };

    // Call the local function to display the table
    show();
}