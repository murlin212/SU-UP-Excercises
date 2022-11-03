#include <iostream>

int main(){
	
	int month, year;
	
	std::cout << "Input a month: ";
	std::cin >> month;
	
	std::cout << "Input an year: ";
	std::cin >> year;
		
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			std::cout << "31 days."; 
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			std::cout << "30 days."; 
			break;
		case 2:
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
    			std::cout << "29 days.";
  			}else{
  				std::cout << "28 days.";
			}
			break;
	}
	
	return 0;
}
