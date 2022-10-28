#include <iostream>

int main(){
	
	int date, year, day, month;
    std::cout << "Enter a date with 8 digits: ";
    std::cin >> date;
    
    year = date % 10000;
    date = date / 10000;
    month = date % 100;
    date = date / 100;
    day = date;
    
    if ((month % 2 == 0 && day <= 30) || (month == 2 && day <= 28) || (month % 2 != 0 && day <= 31)){
    	
        if (month < 10){	
            std::cout << day << "/" << "0" << month << "/" << year << " is a valid date.";
            
        }else if(month <= 12){
        	std::cout << day << "/" << " " << month << "/" << year << " is a valid date.";
        
    	}else{
    		std::cout << "Invalid inputed date!";
		}
      
	}else{
		
        std::cout << "Invalid inputed date!";
    }
    
    return 0;
}

