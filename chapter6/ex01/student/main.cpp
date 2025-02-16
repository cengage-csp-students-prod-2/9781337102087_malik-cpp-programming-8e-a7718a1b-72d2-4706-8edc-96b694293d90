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
    string input;
    
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << input << " is a palindrome" << endl;
    } else {
        cout << input << " is not a palindrome" << endl;
    }

    return 0;
}
