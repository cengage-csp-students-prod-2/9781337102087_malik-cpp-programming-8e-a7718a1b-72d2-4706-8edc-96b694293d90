#include "dayType.h"
#include <iostream>
#include <algorithm>

dayType::dayType() : currentDayIndex(0) {}

dayType::dayType(const std::string& day) {
    auto it = std::find(std::begin(days), std::end(days), day);
    currentDayIndex = (it != std::end(days)) ? std::distance(std::begin(days), it) : 0;
}

void dayType::setDay(const std::string& day) {
    auto it = std::find(std::begin(days), std::end(days), day);
    if (it != std::end(days)) {
        currentDayIndex = std::distance(std::begin(days), it);
    }
}

std::string dayType::getDay() const {
    return days[currentDayIndex];
}

std::string dayType::prevDay() const {
    return days[(currentDayIndex + 6) % 7];
}

std::string dayType::nextDay() const {
    return days[(currentDayIndex + 1) % 7];
}

std::string dayType::addDay(int n) const {
    return days[(currentDayIndex + n) % 7];
}

void dayType::print() const {
    std::cout << "Current day: " << days[currentDayIndex] << std::endl;
}