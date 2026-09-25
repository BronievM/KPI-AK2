#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double x, y;

    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;

    std::cout << "Results:\n";
    std::cout << x << " + " << y << " = " << calc.Add(x, y) << std::endl;
    std::cout << x << " - " << y << " = " << calc.Sub(x, y) << std::endl;
    std::cout << x << " * " << y << " = " << calc.Mul(x, y) << std::endl;

    if (y != 0)
        std::cout << x << " / " << y << " = " << calc.Div(x, y) << std::endl;
    else
        std::cout << "Error: division by zero!" << std::endl;
	
    return 0;
}
