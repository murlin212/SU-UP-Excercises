#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void findCoord(int **matrix, int rows, int cols, int search)
{
    int firstCoord, secondCoord;
    
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
        	
            if (matrix[i][j] == search){
            	
                firstCoord = i;
                secondCoord = j;
                break;
            }
        }
        if (firstCoord == i)
            break;
    }
    
    cout << endl;
    cout << "Coordinates: " << firstCoord << " and " << secondCoord << endl;
}

int main()
{
    int rows, cols, search;
    int **matrix = new int *[rows];
    
    cout << "Enter rows: ";
    cin >> rows;
    
    cout << "Enter cols: ";
    cin >> cols;
    
    std::cout << "Enter the number you want to search: ";
    cin >> search;
    
    for (int i = 0; i < rows; ++i){
    	
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
        	
            cin >> matrix[i][j];
        }
    }

	for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
        	
        	cout << matrix[i][j] << " ";
        }
        cout << std::endl;
    }

    findCoord(matrix, rows, cols, search);

    for (int i = 0; i < rows; ++i){
    	
        delete[] * (matrix + i);
    }
    delete[] matrix;
    matrix = NULL;

    return 0;
}
