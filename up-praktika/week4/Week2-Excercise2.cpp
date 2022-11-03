#include <iostream>

int main(){
	
	int digit;
	
	std::cout << "Input a digit: ";
	std::cin >> digit;
	
	if(digit > 9){
		std::cout << "Inputed number is not a digit! Try again!";
	}
	
	//First part of the task
	if(digit == 6 && digit == 9 && digit == 0){
		std::cout << "One circle in the inputed digit." << std::endl;
	}else if(digit == 8){
		std::cout << "Two circles in the inputed digit." << std::endl;
	}
	
	//Second part of the task	
	switch(digit){
		case 1:
			std::cout << "In english: One"; 
			break;
		case 2:
			std::cout << "In english: Two"; 
			break;
		case 3:
			std::cout << "In english: Three"; 
			break;
		case 4:
			std::cout << "In english: Four"; 
			break;
		case 5:
			std::cout << "In english: Five"; 
			break;
		case 6:
			std::cout << "In english: Six"; 
			break;
		case 7:
			std::cout << "In english: Seven"; 
			break;
		case 8:
			std::cout << "In english: Eight"; 
			break;
		case 9:
			std::cout << "In english: Nine"; 
			break;
		
	}
	
	return 0;
}
