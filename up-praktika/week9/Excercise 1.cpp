#include <iostream>

using std::cin;
using std::cout;

void switchNumbers(int *number1, int *number2){
	
	int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}


int main(){
	
	int num1, num2;
	
	cout << "Input two numbers: ";
	cin >> num1 >> num2;
	
	cout << "In swapped order: ";
	switchNumbers(&num1, &num2);
	
	cout << num1 << "," << num2;
}
