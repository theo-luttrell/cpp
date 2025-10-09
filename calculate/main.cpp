#include <iostream>

std::string calculate(int x, char op, int y) {
    int result {0};
    switch (op) {
    case '+':
        return std::to_string(x + y);
    case '-':
        return std::to_string(x - y);
    case '*':
        return std::to_string(x * y);
    case '/':
        return std::to_string(x / y);
    case '%':
        return std::to_string(x % y);
    default:
        return "There was an error handling your result";
    }
}

int main() {
    int x {0};
    char op {};
    int y {0};

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "Enter an operation; +, -, *, /, %: ";
    std::cin >> op;

    std::cout << "Enter another integer: ";
    std::cin >> y;

    std::cout << calculate(x, op, y) << '\n';

}