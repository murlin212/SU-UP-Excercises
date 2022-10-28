#include <iostream>

int main(){
	
	double firstNum, secondNum;
    std::cout << "Input 2 nums: ";
    std::cin >> firstNum >> secondNum;
    
    if (firstNum > 0 && secondNum > 0) {
        std::cout << "Both numbers are positive" << std::endl;
    }
    else if (firstNum > 0 || secondNum > 0) {
        std::cout << "One number is positive" << std::endl;
    }
    else {
        std::cout << "Both numbers are negative";
    }
    
    return 0;
}
