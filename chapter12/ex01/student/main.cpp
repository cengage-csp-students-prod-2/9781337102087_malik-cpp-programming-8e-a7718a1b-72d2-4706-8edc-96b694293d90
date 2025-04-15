#include <iostream>
#include <cstring> 
#include <cctype> 
  
using namespace std;

int main()
{
    string input;

    // Task #01: Accept input of varying length
    cout << "Enter a string: ";
    getline(cin, input); // reads entire line including spaces

    int len = input.length();

    // Task #02: Use dynamic array allocation
    char* dynamicStr = new char[len + 1]; // +1 for null terminator

    // Copy the input string into the dynamic array
    for (int i = 0; i < len; i++) {
        dynamicStr[i] = input[i];
    }
    dynamicStr[len] = '\0'; // null-terminate the string

    // Convert and print in uppercase
    cout << "\nString in upper case letters is:" << endl;
    for (int i = 0; i < len; i++) {
        cout << static_cast<char>(toupper(dynamicStr[i]));
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] dynamicStr;

    return 0;

}