#include <iostream>

using namespace std;

// Function for Exercise 23
void processNumber(int num) {
    if (num % 2 == 0) {
        cout << "Result: " << num * 2 << endl;
    } else {
        cout << "Result: " << num * 5 << endl;
    }
}

// Function for Exercise 26
void sumAndAverage(int n, int m) {
    if (n > m) {
        swap(n, m);  // Ensure n is smaller for correct range
    }

    int sum = 0, count = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }

    double average = static_cast<double>(sum) / count;
    cout << "Sum: " << sum << " Average: " << average << endl;
}

int main() {
    int num, n, m;

    // Exercise 23: Process a single number
    cout << "Enter an integer: ";
    cin >> num;
    processNumber(num);

    // Exercise 26: Process range of numbers
    cout << "Enter two integers (separated by space): ";
    cin >> n >> m;
    sumAndAverage(n, m);

    return 0;
}
