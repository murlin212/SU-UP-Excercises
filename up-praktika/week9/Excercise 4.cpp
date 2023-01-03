#include <iostream>

using std::cin;
using std::cout;

int switchNumbers(int *array, int size, int search){
	for(int i = 0; i < size; i++){
		
		if(array[i] == search){
			cout << "The element you searched for: ";
			return array[i];
		}else{
			cout << "The elements of this type: ";
			return NULL;
		}
	}
}

int main(){
	
	int size, multiplier, search;
	
	int *array = new int [size];
	
	cout << "Input array size: ";
	cin >> size;
	
	cout << "Input the element you want to search for: ";
	cin >> search;
	
	for(int i = 0; i < size; i++){
		cin >> array[i];
	}
	
	cout << switchNumbers(array, size, search);

	delete[] array;
	array = NULL;
	
	return 0;
}
