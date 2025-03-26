// counterType.h
#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

#include <iostream>
using namespace std;

class counterType {
private:
    int counter;

public:
    // Default constructor: initialize counter to 0
    counterType() {
        counter = 0;
    }

    // Parameterized constructor
    counterType(int c) {
        if (c >= 0)
            counter = c;
        else
            counter = 0;  // Counter must be non-negative
    }

    // Set counter to a specific value
    void setCounter(int c) {
        if (c >= 0)
            counter = c;
        else
            counter = 0;  // Ensure it's non-negative
    }

    // Get current counter value
    int getCounter() const {
        return counter;
    }

    // Increment counter by 1
    void incrementCounter() {
        counter++;
    }

    // Decrement counter by 1 (but don't allow it to go negative)
    void decrementCounter() {
        if (counter > 0)
            counter--;
    }

    // Print the counter value
    void print() const {
        cout << "Counter = " << counter << endl;
    }
};

#endif
