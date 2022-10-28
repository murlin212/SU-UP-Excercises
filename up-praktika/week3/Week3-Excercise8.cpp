#include <iostream>
#include <cmath>

int main(){
		
    int a, b, c;
    
    std::cout << "Input a, b and c: ";
    std::cin >> a >> b >> c;
    
    double d = (b * b) - (4 * a * c);
    
    //statements for verification if d is >,= or < of 0
    if (d < 0)
    {
        std::cout << "No solutions!";
    }
    else if(d == 0)
    {
    	std::cout << "Answer for one x: ";
        std::cout << (-b) / (2 * a);
    }
    else
    {
        std::cout << "First x is: " << (-b + sqrt(d)) / (2 * a) << std::endl;
        std::cout << "Second x is: " << (-b - sqrt(d) ) / (2 * a);
    }
    
	return 0;
}
