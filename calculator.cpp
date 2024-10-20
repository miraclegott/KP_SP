#include "calculator.h"

// This function adds two double values and returns the rounded result as an integer.
// The addition of 0.5 is used to ensure proper rounding when casting to int.
int Calculator::Add(double a, double b)
{
    return a + b + 0.5;
}

// This function subtracts the second double value from the first by utilizing the Add function.
// It passes the negation of the second parameter to achieve subtraction.
int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

// This function multiplies two double values and returns the rounded result as an integer.
// The addition of 0.5 ensures proper rounding when casting to int.
int Calculator::Mul(double a, double b)
{
    return a * b + 0.5;
}
