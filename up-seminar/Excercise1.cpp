#include <iostream>

int main(){
	
	int number;
	std::cout << "Input a number for a month: ";
    std::cin >> number;
    
    switch (number) {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;

    default: std::cout << "There is no such day of the week!"; break;

    }
    
    return 0;
}
