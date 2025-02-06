#include <iostream>

using namespace std;

// Function to compute factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int input;

    // Prompt the user for input
    cout << "Enter a nonnegative integer: ";
    cin >> input;

    // Validate input
    if (input < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << input << "! = " << factorial(input) << endl;
    }

    return 0;
}