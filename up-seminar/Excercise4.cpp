#include <iostream>
#include <cmath>

int main(){
	
	int a, b, c;
	double x1, x2, D;
	
	std::cout << "Input a,b and c: ";
	std::cin >> a >> b >> c;
	
	bool isEven = b % 2 == 0;

	if (a == 0) {
		
		std::cout << "Not an equation!";
	} else {
		
		D = (isEven ? ((double)b / 2) * ((double)b / 2) - a * c : (b * b) - 4 * a * c);
		
		if (D < 0) {
			
			std::cout << "No solutions!";
		} else {
			
			x1 = isEven ? ((-1) * ((double)b / 2) - sqrt(D)) / (double)a : ((-1) * (double)b + sqrt(D)) / 2 * (double)a;
			x2 = isEven ? ((-1) * ((double)b / 2) + sqrt(D)) / (double)a : ((-1) * (double)b - sqrt(D)) / 2 * (double)a;
			std::cout << "First x is: "<< x1 << std::endl << "Second x is: " << x2;
		}
	}
    
    return 0;
}

