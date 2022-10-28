#include <iostream>

int main() {

int numberThreeDigits, digitsSummary;

std::cout << "Input a three digits number: ";
std::cin >> numberThreeDigits;   

int firstDigit = numberThreeDigits % 10;
numberThreeDigits = numberThreeDigits / 10;
int secondDigit = numberThreeDigits % 10 ;
numberThreeDigits = numberThreeDigits / 10;
int thirdDigit = numberThreeDigits % 10 ;

digitsSummary = firstDigit + secondDigit + thirdDigit;

std::cout << "First digit: " << firstDigit << std::endl << "Second digit: " << secondDigit 
		<< std::endl << "Third digit: " << thirdDigit  << std::endl;
		
std::cout << "The summary of the individual digits is: " << digitsSummary;

return 0;
}

