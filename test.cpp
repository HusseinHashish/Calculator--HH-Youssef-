#include "calculator.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Addition (10 + 5): " << add(10, 5) << endl;
    cout << "Subtraction (10 - 5): " << subtract(10, 5) << endl;
    cout << "Multiplication (10 * 5): " << multiply(10, 5) << endl;
    cout << "Division (10 / 5): " << divide(10, 5) << endl;
    cout << "Division by zero (10 / 0): " << divide(10, 0) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Factorial of 1: " << factorial(1) << endl;
    cout << "Factorial of 0: " << factorial(0) << endl;
    cout << "Factorial of -5: " << factorial(-5) << endl;
    cout << "GCD of 48 and 18: " << gcd(48, 18) << endl;
    cout << "GCD of 35 and 49: " << gcd(35, 49) << endl;
    cout << "LCM of 48 and 18: " << lcm(48, 18) << endl;
    cout << "LCM of 35 and 49: " << lcm(35, 49) << endl;
    cout << "Random number between 1 and 100: " << randomInRange(1, 100) << endl;
    cout << "Random number between -10 and 10: " << randomInRange(-10, 10) << endl;

    return 0;
}
