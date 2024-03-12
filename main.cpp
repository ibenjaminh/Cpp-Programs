/*This program allows the user to choose between rock, paper, or scissors. The computer is able to generate a number from 1-3
 * and each number is associated with rock, paper, or scissors. At the end it prints the result of a win, loss, or tie.
 * - Izaac H */
#include <iostream>


int main() {

    srand(time(NULL));

    int computer = std::rand() % 3 + 1;

    int user;

    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Rock!\n";
    std::cout << "2) Paper!\n";
    std::cout << "3) Scissors!\n";

    std::cout << "Shoot! ";

    std::cin >> user;

    if (user == 1)
        std::cout << "You chose: Rock\n";
    else if (user == 2)
        std::cout << "You chose: Paper\n";
    else
        std::cout << "You chose: Scissors\n";

    if (computer == 1)
        std::cout << "Cpu chose: Rock\n";
    else if (computer == 2)
        std::cout << "Cpu chose: Paper\n";
    else
        std::cout << "Cpu chose: Scissors\n";


    if (user == computer) {

        std::cout << "It's a tie!\n";

    }

        // user rock

    else if (user == 1) {

        if (computer == 2) {

            std::cout << "AH! Ya lost to some paper!\n";

        }
        if (computer == 3) {

            std::cout << "Oh yeah! You won!\n";

        }

    }

        // user paper

    else if (user == 2) {

        if (computer == 1) {

            std::cout << "Oh yeah! You won!\n";

        }
        if (computer == 3) {

            std::cout << "AH! You lost to some scissors!\n";

        }

    }

        // user scissors

    else if (user == 3) {

        if (computer == 1) {

            std::cout << "AH! You lost to some paper!\n";

        }
        if (computer == 2) {

            std::cout << "Oh yeah! You won!\n";

        }

    }

    return 0;

}