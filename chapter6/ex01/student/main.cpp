#include <iostream>
#include <string>
#include <algorithm> // for std::transform
// isPalindrome("Madam")
// isPalindrome("abBa")
// isPalindrome("22")
// isPalindrome("67876")
// isPalindrome("444244")
// isPalindrome("trYmeuemyRT")
using namespace std;


bool isPalindrome(string str) {

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    int length = str.length(); 
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }   
    } 
    return true;
}

int main() {
    // Test strings
    string testStrings[] = {"Madam", "abBa", "22", "67876", "444244", "trYmeuemyRT"};
    
    // Loop through each string and check if it is a palindrome
    for (const string& str : testStrings) {
        if (isPalindrome(str)) {
            cout << str << " is a palindrome." << endl;
            cout << "isPalindrome(\"" << str << "\") = " 
             << (isPalindrome(str) ? "true" : "false") << endl;
            
        } else {
            cout << str << " is not a palindrome." << endl;
            cout << "isPalindrome(\"" << str << "\") = " 
             << (isPalindrome(str) ? "true" : "false") << endl;
        }
    }
    
    return 0;
}