#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double hours = 0.0;
    double hourlyRate = 0.0;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter # of hours worked(-1 to end): ";
        cin >> hours;

        if (hours == -1) {
            break;
        }

        cout << "Enter hourly rate of the worker($00.00): ";
        cin >> hourlyRate;

        double salary = 0.0;

        if (hours <= 40) {
            salary = hours * hourlyRate;
        }
        else {
            salary = (40 * hourlyRate) + ((hours - 40) * hourlyRate * 1.5);
        }

        cout << "Salary is $" << salary << endl << endl;
    }

    return 0;
}