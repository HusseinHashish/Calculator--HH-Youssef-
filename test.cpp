#include "calculator.h"
#include <iostream>

using namespace std;

int main() {
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "5 - 3 = " << subtract(5, 3) << endl;
    cout << "5 * 3 = " << multiply(5, 3) << endl;
    cout << "5 / 3 = " << divide(5, 3) << endl;
    cout << "5 / 0 = " << divide(5, 0) << endl;  
    cout << "Factorial of 5 = " << factorial(5) << endl;
    cout << "GCD of 48 and 18 = " << gcd(48, 18) << endl;
    cout << "LCM of 21 and 6 = " << lcm(21, 6) << endl;
    cout << "Random numbers between 1 and 100: ";
    for (int i = 0; i < 5; i++) {
        cout << random_in_range(1, 100) << " ";
    }
    cout << endl;

    return 0;
}
