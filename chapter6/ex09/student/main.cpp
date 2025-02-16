#include <iostream>

using namespace std;
int reverseDigit(int num);
int reverseDigit(int num) {
    bool isNegative = num < 0;  
    num = abs(num); 

    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);  
        num /= 10;  
    }

    return isNegative ? -reversed : reversed; 
}

int main() {

    int input;
    cin >> input;

    cout << "Reverse of " << reverseDigit(input) << endl;


    return 0;
}
