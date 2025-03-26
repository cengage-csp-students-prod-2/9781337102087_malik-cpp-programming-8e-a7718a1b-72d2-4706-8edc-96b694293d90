#include <iostream>
#include <string>
  
#include "dayType.h"  

using namespace std;

int main() {
    dayType day("Wednesday");
  
    cout << "Initial day: " << day.getDay() << endl;
  
    cout << "Previous day: " << day.prevDay() << endl;
    cout << "Next day: " << day.nextDay() << endl;
  
    cout << "Add 3 days: " << day.addDay(3) << endl;
    cout << "Add 10 days: " << day.addDay(10) << endl;
  
    day.setDay("Monday");
    day.print();
  
    return 0;
  }
