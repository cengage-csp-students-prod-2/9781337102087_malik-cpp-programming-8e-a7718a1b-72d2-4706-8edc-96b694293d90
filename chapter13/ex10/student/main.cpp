#include <iostream>

using namespace std;

class fractionType {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    fractionType() {
        numerator = 0;
        denominator = 1;
    }

    // Set values
    void setFraction(int num, int denom) {
        numerator = num;
        if (denom == 0) {
            cout << "Denominator cannot be 0. Defaulting to 1." << endl;
            denominator = 1;
        } else {
            denominator = denom;
        }
    }

    // Overload arithmetic operators
    fractionType operator+(fractionType other) {
        fractionType result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    fractionType operator-(fractionType other) {
        fractionType result;
        result.numerator = numerator * other.denominator - other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    fractionType operator*(fractionType other) {
        fractionType result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    fractionType operator/(fractionType other) {
        fractionType result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    // Overload comparison operators
    bool operator==(fractionType other) {
        return numerator * other.denominator == other.numerator * denominator;
    }

    bool operator!=(fractionType other) {
        return !(*this == other);
    }

    bool operator<(fractionType other) {
        return numerator * other.denominator < other.numerator * denominator;
    }

    bool operator<=(fractionType other) {
        return *this < other || *this == other;
    }

    bool operator>(fractionType other) {
        return !(*this <= other);
    }

    bool operator>=(fractionType other) {
        return !(*this < other);
    }

    // Overload stream operators
    friend istream& operator>>(istream& in, fractionType& f) {
        char slash;
        int num, denom;
        in >> num >> slash >> denom;
        f.setFraction(num, denom);
        return in;
    }

    friend ostream& operator<<(ostream& out, const fractionType& f) {
        out << f.numerator << "/" << f.denominator;
        return out;
    }
};

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

    cout << "\nComparison Results:\n";
    cout << x << " == " << y << ": " << (x == y ? "true" : "false") << endl;
    cout << x << " != " << y << ": " << (x != y ? "true" : "false") << endl;
    cout << x << " <  " << y << ": " << (x < y ? "true" : "false") << endl;
    cout << x << " <= " << y << ": " << (x <= y ? "true" : "false") << endl;
    cout << x << " >  " << y << ": " << (x > y ? "true" : "false") << endl;
    cout << x << " >= " << y << ": " << (x >= y ? "true" : "false") << endl;

    return 0;
}
