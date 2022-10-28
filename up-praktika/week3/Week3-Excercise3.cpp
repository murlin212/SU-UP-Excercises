#include <iostream>

int main(){
	

	double x, a, b;
    std::cout << "Input x:" << std::endl;
    std::cin >> x;

    std::cout << "Input coordinates a and b:" << std::endl;
    std::cin >> a >> b;

    if (a >= x && b >= x) {
        std::cout << "The coordinate x is between a and b" << std::endl;;
    }
    else {
        std::cout << "The coordinate x is not between a and b" << std::endl;
    }
    
    //ternary operator usage:
    (a >= x && b >= x) ? std::cout << "The coordinate x is between a and b" : std::cout << "the coordinate x is not between a and b";
	
	return 0;
}
