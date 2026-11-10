#include <iostream>

using namespace std;

int main() {
    int n = 10;

    cout << "(A)" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << "(B)" << endl;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    cout << "(C)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < n - i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << "(D)" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}