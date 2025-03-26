// counterType.h
#ifndef COUNTER_TYPE_H
#define COUNTER_TYPE_H

class counterType {
public:
    counterType();                  // Default constructor
    counterType(int c);             // Parameterized constructor

    void setCounter(int c);         // Set counter
    int getCounter() const;         // Get counter value

    void incrementCounter();        // Increment counter
    void decrementCounter();        // Decrement counter
    void print() const;             // Print counter

private:
    int counter;                    // Holds the counter value
};

#endif
