#include <iostream>
#include "fractionType.h"

using namespace std;

int main() {
    fractionType x, y, z;
    char choice;
    
    cout << "Enter first fraction in the form a/b: ";
    cin >> x;
    cout << "Enter second fraction in the form a/b: ";
    cin >> y;
    
    cout << "\nx = " << x << endl;
    cout << "y = " << y << endl;
    
    // Test arithmetic operations
    z = x + y;
    cout << "\nx + y = " << z << endl;
    
    z = x - y;
    cout << "x - y = " << z << endl;
    
    z = x * y;
    cout << "x * y = " << z << endl;
    
    z = x / y;
    cout << "x / y = " << z << endl;
    
    // Test relational operations
    cout << "\nRelational operations:" << endl;
    cout << "x == y: " << (x == y ? "true" : "false") << endl;
    cout << "x != y: " << (x != y ? "true" : "false") << endl;
    cout << "x < y: " << (x < y ? "true" : "false") << endl;
    cout << "x <= y: " << (x <= y ? "true" : "false") << endl;
    cout << "x > y: " << (x > y ? "true" : "false") << endl;
    cout << "x >= y: " << (x >= y ? "true" : "false") << endl;
    
    // Test additional cases
    fractionType a(1, 2), b(3, 4), c(2, 4);
    cout << "\nAdditional tests:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a == c: " << (a == c ? "true" : "false") << endl;
    
    // Test division by zero
    fractionType zero(0, 1);
    cout << "\nTesting division by zero (x / 0):" << endl;
    z = x / zero;
    cout << "Result: " << z << " (should be original fraction due to protection)" << endl;
    
    return 0;
}