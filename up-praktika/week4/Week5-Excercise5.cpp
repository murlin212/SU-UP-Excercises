#include <iostream>
#include <cmath>

int main(){
	
bool bolleancondition = true;
    
    //Task 5.1
    
    /*int p;
    
    std::cout << "Input p: ";
    std::cin >> p;
    
    if (p % 4 == 0 || p % 7 == 0)
    {
    	std::cout << std::boolalpha << bolleancondition << std::endl;
    }
    
    //Task 5.2
    
    int a, b, c;
    
    std::cout << "Input a, b and c for quadratic equation: ";
    std::cin >> a >> b >> c;
    
    if ((a == 0) || (b * b - 4 * a * c) < 0)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    } */
    
    //Task 5.3
    
    /*int a, b;
    
    std::cout << "Input a,b coordinates: ";
    std::cin >> a >> b;
    
    if (sqrt(b * b + (a + 1) * (a + 1)) <= 5)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    }
    
    //Task 5.4   
    
    int a, b, c, d, f;
    
    std::cout << "Input a,b coordinates: ";
    std::cin >> a >> b;
    
    std::cout << "Input circle center coordinates: ";
    std::cin >> c >> d;
    
    std::cout << "Input radius f: ";
    std::cin >> f;
    
    if (sqrt((a + c) * (a + c) + (b + f) * (b + f)) > f)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    } */
    
    //Task 5.5
    
    /*int x, y;
    
    std::cout << "Input x,y coordinates: ";
    std::cin >> x >> y;
    
    if ( x < 0 && y < 0 && sqrt(x * x + y * y) <= 5)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    }*/
    
    //Task 5.6
    
    /*int x, y;
    
    std::cout << "Input x,y coordinates: ";
    std::cin >> x >> y;
    
    if (sqrt((x * x) + (y * y)) <= 10 && sqrt((x * x) + (y * y)) >= 5)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    } */
    
    //Task 5.7
    
    /*double randomX;
    
    std::cout << "Input a x coordinate: ";
    cin >> randomX;
    
    if (randomX >= 0 && randomX <= 1)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    } */
    
    //Task 5.8
    
    /*int a, b, c, maximum, x;
    
    std::cout << "Input a,b and c numbers: ";
    std::cin >> a >> b >> c;
    
    std::cout << "Enter x number: ";
    std::cin >> x;
    
    maximum = std::max(a, b);
    maximum = std::max(maximum, c);
    
    if(x == maximum){
    	std::cout << std::boolalpha << bolleancondition << std::endl;
	}*/
	
	//Task 5.9
	/*int a, b, c, maximum, x;
    
    std::cout << "Input a,b and c numbers: ";
    std::cin >> a >> b >> c;
    
    std::cout << "Enter x number: ";
    std::cin >> x;
    
    maximum = std::max(a, b);
    maximum = std::max(maximum, c);
    
    if(x > maximum || x < maximum){
    	std::cout << std::boolalpha << bolleancondition << std::endl;
	}*/
	
	//Task 5.10
	/*bool firstStatement, secondStatement;
	
	std::cout << "Enter two statements as booleans: ";
    std::cin >> firstStatement >> secondStatement;
    
    if (firstStatement || secondStatement)
    {
       std::cout << std::boolalpha << bolleancondition << std::endl;
    }*/
    
    //Task 5.11
    /*bool firstStatement, secondStatement;
	
	std::cout << "Enter two statements as booleans: ";
    std::cin >> firstStatement >> secondStatement;
    
    if (firstStatement && secondStatement)
    {
       std::cout << std::boolalpha << bolleancondition << std::endl;
    }*/
    
    //Task 5.12
	/*int a, b, c;
    
    std::cout << "Input a, b and c numbers: ";
    std::cin >> a >> b >> c;
    
    if (a < 0 && b < 0 && c < 0)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    }*/
    
    //Task 5.13
    /*int numberP, firstDigit, secondDigit, thirdDigit;
    
    std::cout << "Input a three digit, positive number: ";
    std::cin >> numberP;
    
    firstDigit = numberP % 10;
    numberP /= 10;
    secondDigit = numberP % 10;
    numberP /= 10;
    thirdDigit = numberP % 10;
    
    if (firstDigit == 7 || secondDigit == 7 || thirdDigit == 7)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    }*/
    
    //Task 5.14
    /*int numberM, firstDigit, secondDigit, thirdDigit;
    
    std::cout << "Input a three digit number: ";
    std::cin >> numberM;
    
    firstDigit = numberM % 10;
    numberM /= 10;
    secondDigit = numberM % 10;
    numberM /= 10;
    thirdDigit = numberM % 10;
    
    if (firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit)
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    }*/
    
    //Task 5.15
    int numberM, firstDigit, secondDigit, thirdDigit;
    
    std::cout << "Input a three digit number: ";
    std::cin >> numberM;
    
    firstDigit = numberM % 10;
    numberM /= 10;
    secondDigit = numberM % 10;
    numberM /= 10;
    thirdDigit = numberM % 10;
    
    if ((firstDigit == secondDigit) || (firstDigit == thirdDigit) || (secondDigit == thirdDigit))
    {
        std::cout << std::boolalpha << bolleancondition << std::endl;
    }
    
	return 0;
}
