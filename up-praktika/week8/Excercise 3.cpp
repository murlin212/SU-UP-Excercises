#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int MAX_SIZE = 100;

void TransposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols){
	
	for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
	
    int matrix[MAX_SIZE][MAX_SIZE], rows, cols;

	std::cout << "Enter matrix rows: ";
    std::cin >> rows;
    
    std::cout << "Enter matrix cols: ";
    std::cin >> cols;
    
    std::cout << "Input matrix: ";
	for (int i = 0; i < rows; ++i){
		
        for (int j = 0; j < cols; ++j){
        	
            std::cin >> matrix[i][j];
        }
    }
    
    std::cout << "Before trasponse matrix: " << endl;
	for (int i = 0; i < rows; ++i){
		
        for (int j = 0; j < cols; ++j){
        	
            std::cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    std::cout << std::endl;

	std::cout << "After trasponse matrix: " << endl;
    TransposeMatrix(matrix, rows, cols);

    return 0;
}
