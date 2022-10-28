#include <iostream>

int main(){
	
	int n, m, k;
	
    std::cout << "Input n, m and k: ";
    std::cin >> n >> m >> k;
    
    if (k % n == 0 || k % m == 0){   	
        std::cout << "yes";   
		    
    }else{
    	
        std::cout << "no";
    }
    
	return 0;
}
