#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double sales = 0.0;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter sales in dollars(-1 to end): ";
        cin >> sales;

        if (sales == -1) {
            break;
        }

        double salary = 200.0 + (sales * 0.09);

        cout << "Salary is: $"<< salary << endl;
    }

    return 0;
}