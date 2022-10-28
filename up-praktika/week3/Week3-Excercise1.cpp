#include <iostream>
#include <algorithm>

int main(){
	
int firstNum, secondNum;
std::cout << "Input two numbers: ";

std::cin >> firstNum >> secondNum;

int result = std::max(firstNum, secondNum);
std::cout << "The bigger number is: " << result;

return 0;
}
