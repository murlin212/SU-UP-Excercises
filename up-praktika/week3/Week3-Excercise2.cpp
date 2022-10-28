#include <iostream>

int main(){
	
	int number;
	std::cout << "Input a number: ";
	std::cin >> number;
    
	if(number > 0 && number <= 12){
    	std::cout << "The number is a valid month!";
	}else{
    	std::cout << "The number is not a valid month!";
	}
}
