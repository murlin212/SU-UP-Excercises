#include <iostream>

int main(){
	
	int x, y;
    std::cout << "Enter x, y coordinates: ";
    std::cin >> x >> y;
    
    if (x == 0 && y == 0){   	
        std::cout << "The point (" << x << "," << y << ") is the starting point";
        
    }else if (x == 0 || y == 0){
    	std::cout << "The point (" << x << "," << y << ") is on the " << ((x == 0) ? "x" : "y") << "-axis.";
    	
    }else{
        if (x > 0){
            if (y > 0){
                std::cout << "The point (" << x << "," << y << ") is in the first quadrant";
            }else{
                std::cout << "The point (" << x << "," << y << ") is in the fourth quadrant.";
            }
        }else{
            if (y > 0){
                std::cout << "The point (" << x << "," << y << ") is in the second quadrant.";
            }else{
                std::cout << "The point (" << x << "," << y << ") is in the third quadrant.";
            }
        }
    }
    
    return 0;
}

