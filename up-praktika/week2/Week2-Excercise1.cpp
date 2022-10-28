#include <iostream>

int main(){
	
int apples, pears, bananas;

std::cout << "Inout the amount of apples you want: ";
std::cin >> apples;
    
std::cout << "Inout the amount of pears you want: ";
std::cin >> pears;
    
std::cout << "Inout the amount of bananas you want: ";
std::cin >> bananas;

std::cout << "You need to buy: " << apples << " apples, " << pears << " pears and " << bananas << " bananas!" << std::endl;

return 0;
}
