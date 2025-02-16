#include <iostream>
#include <algorithm>  // For transform()
using namespace std;

// Function to check if a string is a palindrome (case-insensitive)
bool isPalindrome(string str) {
    int length = str.length();

    // Convert the string to lowercase for case insensitivity
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Required test cases
    string testCases[] = {"Madam", "abBa", "22", "67876", "444244", "trYmeuemyRT"};

    // Loop through test cases and check if each is a palindrome
    for (string str : testCases) {
        cout << "isPalindrome(\"" << str << "\") = " 
             << (isPalindrome(str) ? "true" : "false") << endl;
    }

    return 0;
}

