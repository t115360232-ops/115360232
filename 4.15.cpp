#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double principal = 5000.0;
    int years = 15;

    cout << fixed << setprecision(2);

    for (double rate = 0.10; rate <= 0.12; rate += 0.005) {
        cout << "\nInterest Rate: " << (rate * 100.0) << " % " << endl;
        cout << "Year" << setw(20) << "Amount on deposit" << endl;

        for (int year = 1; year <= years; ++year) {
            double amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << setw(20) << amount << endl;
        }
    }

    return 0;
}