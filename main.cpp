#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    std::cout << "9 + 2 = " << calc.Add(9, 2) << std::endl;
    std::cout << "9 - 2 = " << calc.Sub(9, 2) << std::endl;

    return 0;
}
