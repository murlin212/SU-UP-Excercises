#include <iostream>

int main(){
	
	int nMeters, metersToPaint;
	
    std::cout << "Input n meters of painting to do: ";
    std::cin >> nMeters;
    
    metersToPaint = nMeters * (nMeters + 1);
    
    std::cout << metersToPaint <<" meters to paint-over!";
    
    return 0;
}

