#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double studyHours;

    // Prompt user for input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the number of hours you study: ";
    cin >> studyHours;

    // Output the result in the required format
    cout << "Hello, " << name << "! On Saturday, you need to study " 
         << studyHours << " hours for the exam." << endl;

    return 0;
}

