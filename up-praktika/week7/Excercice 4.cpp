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

int main(){
	
	const int arrayLength = 100;
	char array[arrayLength];
	
	int n;
	cout << "Input n: ";
	cin >> n;
	
	for (int i = 0; i < n; ++i){
        cin >> array[i];
    }
    
   cout << "Char length: " << charLengthCheck(array);
	
return 0;
}
