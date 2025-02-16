#include <iostream>

using namespace std;


void processNumber(int num) {
    if (num % 2 == 0) {
        cout << "Result: " << num * 2 << endl;
    } else {
        cout << "Result: " << num * 5 << endl;
    }
}


void sumAndAverage(int n, int m) {
    if (n > m) {
        swap(n, m);  
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

    cout << "Enter an integer: ";
    cin >> num;
    processNumber(num);

    cout << "Enter two integers (separated by space): ";
    cin >> n >> m;
    sumAndAverage(n, m);

    return 0;
}
