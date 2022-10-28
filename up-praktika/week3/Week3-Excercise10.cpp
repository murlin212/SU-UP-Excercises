#include <iostream>

int main(){
	
	bool beerInFridge, iceInFridge, rakiyaInFridge;
	
    std::cout << "Has Tishko put the beer in the fridge? |0 - no, 1 - yes|" << std::endl; 
    std::cin >> beerInFridge;
    
    std::cout << "Has Tishko put the rakiya in the fridge? |0 - no, 1 - yes|" << std::endl;
    std::cin >> rakiyaInFridge;
    
    std::cout << "Has Tishko put ice in the freezer? |0 - no, 1 - yes|" << std::endl;
    std::cin >> iceInFridge;
    
    
    if (beerInFridge){
    	
        std::cout << "Thishko will drink a beer." << std::endl;
    }
    else if (rakiyaInFridge && iceInFridge){   	
        std::cout << "Thisko will dring rakiya with ice." << std::endl;
        
    }else{	
        std::cout << "Tishko has to bye a beer from the store (he has rakiya but no ice)." << std::endl;
    }
}
