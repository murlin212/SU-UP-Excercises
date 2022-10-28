#include <iostream>

int main(){
	
	int year;
	std::cout << "Enter an year to check wether it is a leap year or not: ";
    std::cin >> year;
    

	if (year % 400 == 0) {
    
	std::cout << year << " is a leap year.";
	
	}else if (year % 100 == 0){
		
	std::cout << "Not a leap year!" << std::endl;
	
	}else if (year % 4 == 0){
		
	std::cout << "The year "<< year << " is a leap year!" << std::endl;
	
	}else{
		
	std::cout << "Not a leap year!" << std::endl;
	}
    
    return 0;
}
