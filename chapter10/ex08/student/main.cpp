#include "dayType.h"
#include <iostream>

int main() {
    dayType today("Tuesday");
    today.print();

    cout << "Next Day: " << today.nextDay() << endl;
    cout << "Previous Day: " << today.prevDay() << endl;

    today.addDay(5);
    cout << "After adding 5 days: ";
    today.print();

    today.addDay(-3);
    cout << "After subtracting 3 days: ";
    today.print();

    return 0;
}

