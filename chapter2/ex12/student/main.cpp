#include <iostream>
using namespace std;

int main() {
    int elapsedSeconds;

    // Prompt the user for input
    cout << "Enter the elapsed time in seconds: ";
    cin >> elapsedSeconds;

    // Calculate hours, minutes, and seconds
    int hours = elapsedSeconds / 3600;
    int minutes = (elapsedSeconds % 3600) / 60;
    int seconds = elapsedSeconds % 60;

    // Display the result in the format hh:mm:ss
    cout << "Elapsed time: " << hours << ":" 
         << (minutes < 10 ? "0" : "") << minutes << ":" 
         << (seconds < 10 ? "0" : "") << seconds << endl;

    return 0;
}
