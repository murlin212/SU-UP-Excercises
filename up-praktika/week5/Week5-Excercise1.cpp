#include <iostream>

int main()
{
    int number;

    do {

        std::cout << "Input a number: ";
        std::cin >> number;
    } while (number > 100 || number < 10);
    
    return 0;
}
