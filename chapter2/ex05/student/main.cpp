#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double radius;
    double area;
    const double PI = 3.14;

    double circumference;

    cout << "Enter the radius: ";

    cin >> radius;

    cout << endl;

    area = PI * pow(radius,2);


    cout << "Area = " << area << endl;

    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    cout << "Circumference = " << circumference << endl;


    return 0;
}