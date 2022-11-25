#include <iostream>

int maxnumber(int num1, int num2){
	
	if(num1 > num2){
		
		return num1;
	}else{
		return num2;
	}		
}

int main(){
	
int num1, num2;
std::cout << "Input two numbers: ";
std::cin >> num1 >> num2;

std::cout << "Maximum number is: " << maxnumber(num1, num2);

}
