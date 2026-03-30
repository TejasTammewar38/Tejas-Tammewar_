#include <iostream>

int main() {
    float a, b, result;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    if (b != 0) {
        result = a / b;
        std::cout << "Division result: " << result << std::endl;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }

    return 0;
}
