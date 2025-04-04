#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>

using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);
int random_in_range(int min, int max);
double evaluate_expression(const string& expression);

#endif

