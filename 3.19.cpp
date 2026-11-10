#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double principal = 0.0;
    double rate = 0.0;
    int days = 0;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter loan principal(-1 to end): ";
        cin >> principal;

        if (principal == -1) {
            break;
        }

        cout << "Enter interest rate: ";
        cin >> rate;

        cout << "Enter term of the loan in days: ";
        cin >> days;

        double interest = principal * rate * days / 365.0;

        cout << "The interest charge is $" << interest << endl << endl;
    }

    return 0;
}