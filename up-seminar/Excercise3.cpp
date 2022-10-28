#include <iostream>

int main(){
	
	int a, b;
	
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;

	if (a == 0) {
		
		if (b == 0) {
				std::cout << "Every x is solution!" << std::endl;
		} else {
				std::cout << "No solution!" << std::endl;
		}
		
	} else {
	
		std::cout << "The solution for x is : " << (-b) / a;
	}
    
    return 0;
}
