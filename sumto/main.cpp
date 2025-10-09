#include <iostream>

int sumTo(int x) {
    // {
        int total {0};
        for (int i {0}; i <= x; i++) {
            total += i;
        }
    // }

    return total;
}

int main() {
    int x {0};

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << sumTo(x) << '\n';
}