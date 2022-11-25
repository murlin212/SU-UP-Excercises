#include <iostream>

void PowerOfSecond(int a, int b){
    bool isPower = false;
    
    int additional = 1;
    int pwrCounter = 0;

    for (int i = 0; additional < a; ++i){
    	
        additional *= b;
        pwrCounter++;
    }

    if (additional == a){
    	
        isPower = true;
        std::cout << std::boolalpha << isPower << std::endl;
        std::cout << "The power is: " << pwrCounter;
    }else{
    	
        isPower = false;
        std::cout << std::boolalpha << isPower;
    }
}

int main()
{
    int a, b;

    std::cout << "Enter a, b: \n";
    std::cin >> a >> b;

    PowerOfSecond(a, b);

    return 0;
}
