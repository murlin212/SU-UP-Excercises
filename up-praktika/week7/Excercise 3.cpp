#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	const int arrayLength = 100;
	int array[arrayLength];
	
	int n;
	cout << "Input n: ";
	cin >> n;
	
	for (int i = 0; i <= n - 1; ++i){
        cin >> array[i];
    }
	
	int counterBiggerNums = 0;
	
    int firstElem = array[0];   
    int secondElem = array[1];
    
    for (int i = 2; i <= n - 1; ++i){
    	
        if (secondElem > firstElem && secondElem > array[i]) 
        {
            ++counterBiggerNums;
        }
        
        firstElem = secondElem;
        secondElem = array[i];
    }
    
    cout << counter;
	
return 0;
}
