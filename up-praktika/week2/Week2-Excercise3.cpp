#include <iostream>

int main(){
	
int seconds;

std::cout << "Input a number/seconds: ";
std::cin >> seconds;

int days = seconds / 86400;

int hours = (seconds % 86400) / 3600;

int minutes = (seconds % 86400 % 3600) / 60;

seconds = seconds % 86400 % 3600 % 60;
std::cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds.";

return 0;
}
