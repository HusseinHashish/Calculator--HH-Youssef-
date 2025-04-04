#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <stdexcept>

using namespace std;


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Error: Division by zero");
    }
    return static_cast<double>(a) / b;
}

int factorial(int n) {
    if (n < 0) {
        throw runtime_error("Error: Negative factorial");
    }
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}

int random_in_range(int min, int max) {
    static bool seeded = false;
    if (!seeded) {
        srand(time(nullptr));
        seeded = true;
    }
    return min + rand() % (max - min + 1);
}
