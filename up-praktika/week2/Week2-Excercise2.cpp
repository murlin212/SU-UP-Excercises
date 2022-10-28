#include <iostream>

int main(){
	
int firstNum, secondNum;

std::cout << "Enter first number: ";
std::cin >> firstNum;

std::cout << "Enter second number: ";
std::cin >> secondNum;

std::cout << "The summary is: "<< firstNum + secondNum << std:: endl 
	<< "The differece is: " << firstNum - secondNum << std:: endl 
	<< "Multiplication: "<< firstNum * secondNum << std:: endl;

return 0;
}
