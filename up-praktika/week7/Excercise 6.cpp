#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void ArrayDoubleMultiplication(double array[], int n, double elem){	
	cout << "Multiplied double array: |";
		
    for (int i = 0; i < n; i++) {
    	
		array[i] = array[i] * elem;
		cout << array[i] << "|";
    }
}

void ArrayIntMultiplication(int array[], int n, int elem){	
	cout << "Multiplied int array: |";
	
    for (int i = 0; i < n; i++) {
    	
		array[i] = array[i] * elem;
		cout << array[i] << "|";
    }
}

int main(){	
	const int arrayLengthInt = 100;
	int arrayInt[arrayLengthInt];
	
	double arrayDouble[arrayLengthInt];
		
	int n;
	cout << "Input n: ";
	cin >> n;
	
	double elem1;
	cout << "Input double multiplier: ";
	cin >> elem1;
	
	int elem2;
	cout << "Input int multiplier: ";
	cin >> elem2;
	
	cout << "Input int array: ";
	for (int i = 0; i < n; ++i){
        cin >> arrayInt[i];
    }
    
    cout << "Input double multiplier: ";
    for (int i = 0; i < n; ++i){
        cin >> arrayDouble[i];
    }
        
   ArrayIntMultiplication(arrayInt, n, elem2);
   cout << endl;
   ArrayDoubleMultiplication(arrayDouble, n, elem1);
	
return 0;
}
