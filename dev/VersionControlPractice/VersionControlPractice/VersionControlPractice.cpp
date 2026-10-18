#include <iostream>
#include "Crypt.h"

int main()
{
    int choice = 0;

    std::cout << "=============================\n";
    std::cout << "       CRYPT KEEPER\n";
    std::cout << "=============================\n";

    std::cout << "1. Enter the Crypt\n";
    std::cout << "2. Flee\n";

    std::cout << "=============================\n";
    std::cout << "Enter your choice: ";

    std::cin >> choice;

    std::cout << "\n";

    if (choice == 1)
    {
        std::cout << "WARNING: Unauthorized souls detected!\n";
    }
    else if (choice == 2)
    {
        std::cout << "The crypt keeper has awakened!\n";
    }
    else
    {
        std::cout << "Invalid choice. Please select 1 or 2.\n";
    }

    std::cout << "\nPress Enter to exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}