// dayTypeImp.cpp

#include "dayType.h"
#include <iostream>
#include <algorithm>

using namespace std;

// Initialize static array of weekdays
string dayType::weekDays[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

// Helper: Convert string to lowercase
string toLower(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// Default constructor sets day to Sunday
dayType::dayType() {
    weekDay = "Sunday";
}

// Constructor with specific day
dayType::dayType(string d) {
    setDay(d);
}

// Set the current day with validation
void dayType::setDay(string d) {
    string input = toLower(d);
    for (const auto& day : weekDays) {
        if (toLower(day) == input) {
            weekDay = day;
            return;
        }
    }
    // Default to Sunday if invalid
    weekDay = "Sunday";
}

// Get the current day
string dayType::getDay() const {
    return weekDay;
}

// Print the current day
void dayType::print() const {
    cout << "Day is: " << weekDay << endl;
}

// Get the index of the current weekday
int getIndex(const string& day) {
    string d = toLower(day);
    for (int i = 0; i < 7; ++i) {
        if (toLower(dayType::weekDays[i]) == d) {
            return i;
        }
    }
    return 0; // Default to Sunday if not found
}

// Return next day
string dayType::nextDay() const {
    int idx = (getIndex(weekDay) + 1) % 7;
    return weekDays[idx];
}

// Return previous day
string dayType::prevDay() const {
    int idx = (getIndex(weekDay) + 6) % 7;
    return weekDays[idx];
}

// Add n days to current day and update
void dayType::addDay(int nDays) {
    int idx = getIndex(weekDay);
    idx = (idx + nDays % 7 + 7) % 7;  // Ensure positive wrap-around
    weekDay = weekDays[idx];
}
