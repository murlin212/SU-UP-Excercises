#include <iostream>

int main()
{
    int firstDigit, secondDigit, thirdDigit, numberCount;
    
    for (int i = 100; i <= 999; i++) {

        firstDigit = i / 100;
        secondDigit = i / 10 % 10;
        thirdDigit = i % 10;

        if (firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit) {
            std::cout << i << " ";
            numberCount ++;
        }
    }
    
    std::cout << std::endl;
    std::cout << "The count of the non-unique number is: " << numberCount;
    
    return 0;
}
