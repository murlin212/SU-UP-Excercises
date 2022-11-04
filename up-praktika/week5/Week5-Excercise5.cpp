#include <iostream>

int main()
{
    int firstDigit, secondDigit, thirdDigit, digitSummary;
    
    for (int i = 100; i <= 999; i++) {

        firstDigit = i / 100;
        secondDigit = i / 10 % 10;
        thirdDigit = i % 10;
        
        int digitSummary = firstDigit * secondDigit * thirdDigit;

        if ((digitSummary != 0) && (i % digitSummary == 0)){
            
			std::cout << i << " ";
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}
