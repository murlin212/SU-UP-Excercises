#include <iostream>

int main(){
	
	int a, b, c;
	
	std::cout << "Input all of the sides: ";
	std::cin >> a >> b >> c;
	
	if (a + b >= c || a + c >= b || b + c >= a) {
			
		std::cout << "Valid triangle (exists)"; 
  	}else{	
  	
  		std::cout << "Invalid triangle (doesn't exist)"; 
	}
		
	return 0;
}
