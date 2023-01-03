#include <iostream>

using std::cout;
using std::cin;

int main(){
	
	const int arrayLength = 100;
	int array[arrayLength];
	
	int n;
	cout << "Input n: ";
	cin >> n;
	
	for(int i; i < n; i++){
		cin >> array[i];		
	}
	
	cout << "Even index elements: |";
	
	for(int i; i < n; i++){
		if(i % 2 == 0){
			cout << array[i] << "|";
		}		
	}
	
	
return 0;
}
