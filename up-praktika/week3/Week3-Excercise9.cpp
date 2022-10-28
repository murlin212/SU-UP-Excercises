#include <iostream>

int main(){
	
	float moneyDeposit;
	char currencyFrom, currencyTo;
	
	std::cout << "Input a deposit of money: ";	   
    std::cin >> moneyDeposit;
    
    std::cout << "Select your current currency (e for EURO, l for BGN): ";
    std::cin >> currencyFrom;
    
    std::cout << "Select your desired currency (e for EURO, l for BGN): ";
    std::cin >> currencyTo;
    
    if (currencyFrom == 'e' && currencyTo == 'l')
    {
    	std::cout << "Converted money is up to: ";
        std::cout << moneyDeposit * 1.95 << std::endl;
    }
    else if (currencyFrom == 'l' && currencyTo == 'e')
    {
    	std::cout << "Converted money is up to: ";
        std::cout << moneyDeposit / 1.95 << std::endl;
    }
    else if ((currencyFrom == 'e' && currencyTo == 'e') || (currencyFrom == 'l' && currencyTo == 'l'))
    {
    	std::cout << "Converted money is up to: ";
        std::cout << moneyDeposit << std::endl;
    }
    else
    {
        std::cout << "Incorrect inputed data!" << std::endl;
    }
    
    return 0;
}
