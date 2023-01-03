#include <iostream>

using std::cin;
using std::cout;

int exchange(int first, int second) {
    
	int temp = first;
    first = second;
    
    return temp;
}


int main(){
	
	int num1, num2;
	
	cout << "Input two numbers: ";
	cin >> num1 >> num2;
	
	int number3 = exchange(num1, num2);
	
	cout << num1 << "," << number3;
}
