#include <iostream>

int main(){
	
int side, apotheme, height;

std::cout << "Input a side: ";
std::cin >> side;

std::cout << "Input an apotheme: ";
std::cin >> apotheme;

std::cout << "Input height: ";
std::cin >> height;

double sideArea = side * side;
double perimeter = side * 4;
double pyramidArea = (perimeter * apotheme) / 2  + sideArea;
double pyramidVolume = (sideArea * height) / 3;

std::cout << "The area of the pyramid is: " << pyramidArea << std::endl << "The volume of the pyramid is: " << pyramidVolume;

return 0;
}
