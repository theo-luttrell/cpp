#include "random.h"
#include <iostream>

int getNumberInput(const int guess_number) {
    int output;
    std::cout << "Guess #" << guess_number << ": ";
    std::cin >> output;
    return output;
}

int checkNumber(const int number, const int numberToGuess) {
    if (number > numberToGuess) {
        return 1;
    } if (number < numberToGuess) {
        return -1;
    } if (number == numberToGuess) {
        return 0;
    } if (true) {
        return 2;
    }
}

void printGuess(int x) {
    switch (x) {
        case 1:
            std::cout << "Your guess is too high.";
            break;
        case -1:
            std::cout << "Your guess is too low.";
            break;
        case 0:
            std::cout << "Correct! You win!";
            break;
        case 2:
            std::cout << "Something went wrong.";
            std::abort();
        default:
            std::abort();
    }
    std::cout << '\n';
}

char playAgainInput() {
    char output;
    std::cout << "Would you like to play again (y/n)? ";
    std::cin >> output;
    return output;
}

int main() {
    while (true) {
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << '\n';

        const int numberToGuess{Random::get(1, 100)};
        for (int i{1}; i <= 7; i++) {
            const int x = checkNumber(getNumberInput(i), numberToGuess);
            printGuess(x);
            if (x == 0) {
                break;
            }
        }
        {
            bool playAgain = true;
            while (true) {
                const char x = playAgainInput();
                if (x =='n') {
                    playAgain = false;
                    break;
                }

                if (x == 'y') {
                    break;
                }
            }

            if (!playAgain) {
                break;
            }
        }

    }
}