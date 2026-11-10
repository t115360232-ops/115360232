#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int count = 0; 
    cout << setw(10) << "Side 1"
        << setw(10) << "Side 2"
        << setw(15) << "Hypotenuse" << endl;
    cout << "------------------------"<< endl;
    for (int side1 = 1; side1 <= 500; ++side1) {
        for (int side2 = side1; side2 <= 500; ++side2) {
            for (int hypotenuse = side2 + 1; hypotenuse <= 500; ++hypotenuse) {
                if ((side1 * side1 + side2 * side2) == (hypotenuse * hypotenuse)) {
                    cout << setw(10) << side1
                        << setw(10) << side2
                        << setw(15) << hypotenuse << endl;
                    count++;
                }
            }
        }
    }
    cout << "\nTotal Pythagorean triples found: " << count << endl;
    return 0;
}