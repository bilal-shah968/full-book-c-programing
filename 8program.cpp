#include <iostream>
using namespace std;


void area(float s) {
    float a = s * s;
    cout << "Area = " << a << endl;
}


void perimeter(float s) 
{
    float p = s * 4;
    cout << "Perimeter = " << p << endl;
}


void factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
}

int main() {
    float side;
    int num;
    
    cout << "Enter the side length of the square: ";
    cin >> side;
    
    area(side); 
    perimeter(side);  
    
    cout << "Enter a number to calculate factorial: ";
    cin >> num;
    factorial(num);
     return 0;      
}
