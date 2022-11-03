#include <iostream>

int main(){
	
	int year;
	
	std::cout << "Input an year: ";
	std::cin >> year;
	
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
			
    	std::cout << "The year " << year << " is a leap year."; 
  	}else{	
  	
  		std::cout << "The year " << year << " is not a leap year."; 
	}
		
	return 0;
}
