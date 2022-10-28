#include <iostream>

int main(){
	
	char symbol;
	std::cout << "Input a random symbol: ";
    std::cin >> symbol;

    if (('A' <= symbol && symbol <= 'Z') || ('a' <= symbol && symbol <= 'z')) {
        std::cout << "The symbol is a letter";
    }
    else {
        std::cout << "The symbol is not a letter";
    }
}
