#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 0.0;
    long i, n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            pi = pi + (1.0 / (2 * i + 1));
        else
            pi = pi - (1.0 / (2 * i + 1));
    }

    pi = 4 * pi; // Multiply the sum by 4 after loop

    cout << fixed << setprecision(5);
    cout << "\npi = " << pi << endl;

    return 0;
}
