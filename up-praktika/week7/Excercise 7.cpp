#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void reversedArray(int array[], int n){
	
	int temp; 
	
	for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    cout << endl;
    cout<<"The reversed array is: |";
    
    for(int i = 0 ; i < n; i++){
    	cout << array[i]<< "|";
	}
}

int main(){
	
	const int arrayLength = 100;
	int array[arrayLength];
	
	int n;
	cout << "Input n: ";
	cin >> n;
	
	for (int i = 0; i < n; ++i){
        cin >> array[i];
    }
    
    cout << "The original array is: |";
    
    for(int i = 0; i < n; i++){
    	
    	cout << array[i] << "|";
    }
    
    reversedArray(array, n);

return 0;
}
