#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int charLengthCheck(char array[]){
	
	int charCounter = 0;
	
    for (int i = 0; array[i] != '\0'; ++i) {
    	
        ++charCounter;
    }
    
    return charCounter;
}

bool isItAPalindrome(char array[]){
	
	int arrayLength = charLengthCheck(array);
	
    for (int i = 0; i < (arrayLength / 2); ++i)
    {
        if (array[i] != array[arrayLength - i - 1])
        {
        	cout << "Its not a Palindrome";
            return false;
        }
    }

	cout << "It is a Palindrome";
    return true;
}

int main(){
	
	const int arrayLength = 100;
	char array[arrayLength];
	
	int n;
	cout << "Input n: ";
	cin >> n;
	
	for (int i = 0; i < n; ++i){
        cin >> array[i];
    }
    
	cout << "Char length: " << charLengthCheck(array) << endl;
	
	isItAPalindrome(array);
	
return 0;
}
