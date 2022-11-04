#include <iostream>

int main()
{
    int n, factoriel = 1;
    
    std::cout << "Input number n: ";
    std::cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        factoriel *= i;     
    }
    std::cout << factoriel; 
    
    return 0;
}
