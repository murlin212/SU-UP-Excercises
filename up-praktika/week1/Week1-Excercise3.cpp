#include <iostream>

int main (){
	
	double firstNum, secondNum, temp;
	
	std::cout << "Input values first number: ";  
    std::cin >> firstNum;
    
    std::cout << "Input values second number: ";
    std::cin >> secondNum;
    
    temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;
    
    std::cout << "First number: " << firstNum << std::endl 
			<< "Second number: " << secondNum;
			
	return 0;
}
