#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int paycode = 0;
    cout << fixed << setprecision(2);

    while (true) {
        cout << "\nEnter paycode(1 = Manager, 2 = Hourly Worker, 3 = Commission Worker, 4 = Pieceworker, -1 to end): ";
        cin >> paycode;

        if (paycode == -1) {
            break;
        }

        double weeklyPay = 0.0;

        switch (paycode) {
        case 1: {
            double weeklySalary = 0.0;
            cout << "Enter weekly salary: ";
            cin >> weeklySalary;
            weeklyPay = weeklySalary;
            break;
        }
        case 2: {
            double hourlyRate = 0.0;
            double hoursWorked = 0.0;
            cout << "Enter hourly rate: ";
            cin >> hourlyRate;
            cout << "Enter hours worked: ";
            cin >> hoursWorked;

            if (hoursWorked <= 40) {
                weeklyPay = hoursWorked * hourlyRate;
            }
            else {
                weeklyPay = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
            }
            break;
        }
        case 3: {
            double grossSales = 0.0;
            cout << "Enter gross weekly sales: ";
            cin >> grossSales;
            weeklyPay = 250.0 + (grossSales * 0.057);
            break;
        }
        case 4: {
            int itemsProduced = 0;
            double payPerItem = 0.0;
            cout << "Enter number of items produced: ";
            cin >> itemsProduced;
            cout << "Enter pay per item: ";
            cin >> payPerItem;
            weeklyPay = itemsProduced * payPerItem;
            break;
        }
        default:
            cout << "Invalid paycode.Please enter 1, 2, 3, 4, or -1 to exit." << endl;
            continue;
        }
        cout << "Employee¡¥s weekly pay is: $" << weeklyPay << endl;
    }

    return 0;
}