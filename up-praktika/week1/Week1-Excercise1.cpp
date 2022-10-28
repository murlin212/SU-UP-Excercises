#include <iostream>

int main (){
	int firstNum, secondNum, thirdNum;
    std::cout << "Input the first number: ";
    std::cin >> firstNum;
    std::cout << "Input the second number: ";
    std::cin >> secondNum;
    std::cout << "Input the third number: ";
    std::cin >> thirdNum;
    
    std::cout << "The summary is: " << firstNum + secondNum + thirdNum;
    
    return 0;
}

