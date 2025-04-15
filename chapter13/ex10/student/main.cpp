#include <iostream>

using namespace std;

class fractionType {
private:
    int numerator;
    int denominator;

public:
    // Default constructor
    fractionType(int num = 0, int denom = 1) {
        numerator = num;
        denominator = (denom == 0) ? 1 : denom; // prevent division by zero
    }

    // Arithmetic operator overloads
    fractionType operator+(const fractionType& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return fractionType(num, denom);
    }

    fractionType operator-(const fractionType& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return fractionType(num, denom);
    }

    fractionType operator*(const fractionType& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return fractionType(num, denom);
    }

    fractionType operator/(const fractionType& other) const {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return fractionType(num, denom);
    }

    // Relational operator overloads
    bool operator==(const fractionType& other) const {
        return numerator * other.denominator == other.numerator * denominator;
    }

    bool operator!=(const fractionType& other) const {
        return !(*this == other);
    }

    bool operator<(const fractionType& other) const {
        return numerator * other.denominator < other.numerator * denominator;
    }

    bool operator<=(const fractionType& other) const {
        return *this < other || *this == other;
    }

    bool operator>(const fractionType& other) const {
        return !(*this <= other);
    }

    bool operator>=(const fractionType& other) const {
        return !(*this < other);
    }

    // Stream insertion and extraction
    friend ostream& operator<<(ostream& os, const fractionType& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }

    friend istream& operator>>(istream& is, fractionType& frac) {
        char slash;
        is >> frac.numerator >> slash >> frac.denominator;
        if (frac.denominator == 0) {
            cout << "Denominator cannot be zero. Setting to 1 by default.\n";
            frac.denominator = 1;
        }
        return is;
    }
};

// Main function to test the class
int main() {
    fractionType x, y, z;

    cout << "Enter first fraction (e.g., 2/3): ";
    cin >> x;
    cout << "Enter second fraction (e.g., 3/4): ";
    cin >> y;

    z = x + y;
    cout << x << " + " << y << " = " << z << endl;

    z = x - y;
    cout << x << " - " << y << " = " << z << endl;

    z = x * y;
    cout << x << " * " << y << " = " << z << endl;

    z = x / y;
    cout << x << " / " << y << " = " << z << endl;

    cout << "\nRelational Comparisons:\n";
    cout << x << " == " << y << " : " << (x == y ? "true" : "false") << endl;
    cout << x << " != " << y << " : " << (x != y ? "true" : "false") << endl;
    cout << x << " < " << y << "  : " << (x < y ? "true" : "false") << endl;
    cout << x << " <= " << y << " : " << (x <= y ? "true" : "false") << endl;
    cout << x << " > " << y << "  : " << (x > y ? "true" : "false") << endl;
    cout << x << " >= " << y << " : " << (x >= y ? "true" : "false") << endl;

    return 0;
}
