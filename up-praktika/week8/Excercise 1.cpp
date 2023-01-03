#include <iostream>
#include <iomanip>

const int MAX_SIZE = 100;

int indexOfColumn(int matrix[MAX_SIZE][MAX_SIZE], int rows, int array[]){
	
    int counter = 0, maximCounter = 0, index;
    
    for (int i = 0; i < 5; ++i){    	
        for (int j = 0; j < rows; ++j){
        	
            if (matrix[j][i] == array[j]){
            	
                ++counter;
                
                if (counter > maximCounter){
                    maximCounter = counter;
                    index = i;
                }
                
            }else{
            	
                counter = 0;
            }
        }
    }
    return index;
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE], rows, array[MAX_SIZE], arraySize;

	std::cout << "Enter matrix rows: ";
    std::cin >> rows;
    
    std::cout << "Input matrix: ";
	for (int i = 0; i < rows; ++i){
		
        for (int j = 0; j < 5; ++j){
        	
            std::cin >> matrix[i][j];
        }
    }
    
    std::cout << "Inputed matrix: " << endl;
	for (int i = 0; i < rows; ++i){
		
        for (int j = 0; j < 5; ++j){
        	
            std::cout << matrix[i][j];
        }
    }
    
    int n;
    
    std::cout << "Enter array size: ";
    std::cin >> n;
    
    std::cout << "Input an array: ";
    for (int i = 0; i < n; ++i){
    	
        std::cin >> array[i];
    }

    std::cout << std::endl;

    std::cout << "Your index is: " << indexOfColumn(matrix, rows, array);

    return 0;
}
