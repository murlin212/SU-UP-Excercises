#include <iostream>
#include <cmath>

int main (){
	
	int x1, x2, y1, y2;
	
	std::cout << "Input all four coordinates: ";
    std::cin >> x1 >> y1 >> x2 >> y2;
    
    double distanceBetween = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    std::cout << "The distance between the 2 points is: " << distanceBetween;
}
