#include <iostream>
#include <string>
#include <algorithm> // for std::transform

using namespace std;

// Function to check if a string is a palindrome (case-insensitive)
bool isPalindrome(string str) {
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    int length = str.length(); 
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        } // if    
    } // for loop
    return true;
}// isPalindrome

int main() {
    // Test strings
    string testStrings[] = {"Madam", "abBa", "22", "67876", "444244", "trYmeuemyRT"};
    
    // Loop through each string and check if it is a palindrome
    for (const string& str : testStrings) {
        if (isPalindrome(str)) {
            cout << str << " is a palindrome." << endl;
        } else {
            cout << str << " is not a palindrome." << endl;
        }
    }
    
    return 0;
}