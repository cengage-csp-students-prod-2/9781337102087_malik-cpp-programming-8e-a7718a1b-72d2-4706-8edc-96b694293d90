#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int firstNum, secondNum;

    // Prompt user for valid input
    do {
        cout << "Enter two integers (firstNum must be less than secondNum): ";
        cin >> firstNum >> secondNum;
    } while (firstNum >= secondNum);

    // Output all odd numbers between firstNum and secondNum
    cout << "Odd numbers between " << firstNum << " and " << secondNum << ": ";
    int num = firstNum;
    do {
        if (num % 2 != 0) {
            cout << num << " ";
        }
        num++;
    } while (num <= secondNum);
    cout << endl;

    // Output sum of all even numbers between firstNum and secondNum
    int evenSum = 0;
    num = firstNum;
    do {
        if (num % 2 == 0) {
            evenSum += num;
        }
        num++;
    } while (num <= secondNum);
    cout << "Sum of even numbers: " << evenSum << endl;

    // Output numbers and their squares between 1 and 10
    cout << "Numbers and their squares between 1 and 10:" << endl;
    num = 1;
    do {
        cout << num << "  " << (num * num) << endl;
        num++;
    } while (num <= 10);

    // Output sum of the squares of odd numbers between firstNum and secondNum
    int oddSquareSum = 0;
    num = firstNum;
    do {
        if (num % 2 != 0) {
            oddSquareSum += (num * num);
        }
        num++;
    } while (num <= secondNum);
    cout << "Sum of squares of odd numbers: " << oddSquareSum << endl;

    cout << "Uppercase letters from A to Z: ";
    char letter = 'A';
    do {
        cout << letter << " ";
        letter++;
    } while (letter <= 'Z');
    cout << endl;

    return 0;
}
