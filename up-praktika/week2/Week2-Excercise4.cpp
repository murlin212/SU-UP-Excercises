#include <iostream>

int main(){
	
int number, firstDigit, secondDigit, thirdDigit, reversedOrder;

std::cout << "Enter a number: " ;
std::cin >> number;

firstDigit = number / 100;
secondDigit = number / 10 % 10;
thirdDigit = number % 10;

reversedOrder = (thirdDigit*100) + (secondDigit*10) + firstDigit;

std::cout << "The reverse order of the number is: " << reversedOrder << std::endl;

return 0;
}
