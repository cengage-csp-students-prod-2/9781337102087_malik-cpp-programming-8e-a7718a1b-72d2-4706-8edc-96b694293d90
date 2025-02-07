#include <iostream>

using namespace std;

int main() {
    int a, b, t;
    
    // Prompt the user for input
    cout << "Enter the time for the first dish (a): ";
    cin >> a;
    cout << "Enter the additional time per dish (b): ";
    cin >> b;
    cout << "Enter the total available time (t): ";
    cin >> t;

    int dishes = 0;
    int timeSpent = 0;
    
    // Calculate the number of dishes Bianca can prepare
    while (timeSpent + a <= t) {
        timeSpent += a;
        dishes++;
        a += b;  // Increase time for the next dish
    }

    // Output the number of dishes prepared
    cout << "Number of dishes Bianca can prepare: " << dishes << endl;

    return 0;
}
