#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void findMinAndMax(int *array, int size, int *min, int *max)
{
    for (int i = 1; i < size; ++i)
    {
        if (array[i] < *min){
        	
            *min = array[i];
        }
        
		if (array[i] > *max){
			
            *max = array[i];
        }
    }
}

int main(){
	
	int size, multiplier, search, min, max;
	
	cout << "Input array size: ";
	cin >> size;
	
	int *array = new int [size];
	
	for(int i = 0; i < size; i++){
		cin >> array[i];
	}
	
	max = *array;
	min = *array;
	
	findMinAndMax(array, size, &min, &max);

	cout << "Smallest element: " << min << endl;
	cout << "Biggest element: " << max << endl;
	
	delete[] array;
	array = NULL;
	
	return 0;
}
