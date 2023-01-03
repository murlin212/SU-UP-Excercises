#include <iostream>

using std::cin;
using std::cout;

void switchNumbers(int *array, int size, int multiplier){
	
	for(int i = 0; i < size; i++){
		
		array[i] *= multiplier;
		
		cout << array[i] << "|";
	}
}


int main(){
	
	int size, multiplier;
	
	int *array = new int [size];
	
	cout << "Input array size: ";
	cin >> size;
	
	cout << "Input array multiplier: ";
	cin >> multiplier;
	
	for(int i = 0; i < size; i++){
		cin >> array[i];
	}
	
	cout << "Multiplied array: |";
	switchNumbers(array, size, multiplier);

	delete[] array;
	array = NULL;
	
	return 0;
}
