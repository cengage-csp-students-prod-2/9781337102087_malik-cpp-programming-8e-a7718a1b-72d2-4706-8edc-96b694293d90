#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double studyHours;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the number of hours you study: ";
    cin >> studyHours;

    cout << "Hello " << name << " "<< " On Saturday, you need to "<<  endl;
    cout << "study hours  " << studyHours << endl;

    return 0;
}

