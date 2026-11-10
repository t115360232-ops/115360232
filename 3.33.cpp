#include <iostream>

using namespace std;

int main() {
    int length = 0;
    int breadth = 0;

    cout << "Enter length(height): ";
    cin >> length;

    cout << "Enter breadth(width): ";
    cin >> breadth;

    cout << endl;

    for (int i = 1; i <= length; ++i) {
        for (int j = 1; j <= breadth; ++j) {
            if (i == 1 || i == length || j == 1 || j == breadth) {
                cout << "+";
            }

            else {
                cout << " ";
            }
        }
        cout << endl; 
    }

    return 0;
}