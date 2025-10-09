#include <iostream>

int main() {
    // int counter {static_cast<int>('a')};
    // while (counter < static_cast<int>('z')) {
    //     std::cout << static_cast<char>(counter) << ' ' << counter << '\n';
    //     ++counter;
    // }

    int counter {1};
    while (counter <= 5) {
        int i{5 - counter};
        while (i > 0) {
            std::cout << "  ";
            --i;
        }
        int j{counter};
        while (j != 0) {
            std::cout << j << ' ';
            --j;
        }
        ++counter;
        std::cout << '\n';
    }
}