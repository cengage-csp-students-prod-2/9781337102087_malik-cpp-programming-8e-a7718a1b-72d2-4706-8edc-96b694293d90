// counterTypeImp.cpp
#include <iostream>
#include "counterType.h"

using namespace std;

// Default constructor
counterType::counterType() {
    counter = 0;
}

// Parameterized constructor
counterType::counterType(int c) {
    if (c >= 0)
        counter = c;
    else
        counter = 0;
}

// Set counter to a specific value
void counterType::setCounter(int c) {
    if (c >= 0)
        counter = c;
    else
        counter = 0;
}

// Get current counter value
int counterType::getCounter() const {
    return counter;
}

// Increment counter by 1
void counterType::incrementCounter() {
    counter++;
}

// Decrement counter by 1 (only if counter > 0)
void counterType::decrementCounter() {
    if (counter > 0)
        counter--;
}

// Print the counter value
void counterType::print() const {
    cout << "Counter = " << counter << endl;
}
