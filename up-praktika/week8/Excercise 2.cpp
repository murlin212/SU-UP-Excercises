#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int MAX_SIZE = 100;

void matrixMultiplication(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int rows1, int rows2, int cols1, int cols2){
	
	int multipliedMatrix[MAX_SIZE][MAX_SIZE];
	
	if(cols1 == rows2){
		
		for (int i = 0; i < rows1; ++i){
			for (int j = 0; j < cols2; ++j){
		    	for (int k = 0; k < rows2; ++k){
		            	
		        	multipliedMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
		        }
		    }
		}
		
		cout << "Multiplied Matrix: ";
		
		for (int i = 0; i < rows2; ++i){
			
	        for (int j = 0; j < cols2; ++j){
	        	
	            std::cout << multipliedMatrix[i][j] << "|";
	        }
	    }
	}else{
		
		cout << "Rules for multiplication don't meet.";
	}
	
}

int main(){
	
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], rows1, rows2, cols1, cols2;

	std::cout << "Enter first matrix rows: ";
    std::cin >> rows1;
    
    std::cout << "Enter first matrix cols: ";
    std::cin >> cols1;
    
    std::cout << "Input first matrix: ";
	for (int i = 0; i < rows1; ++i){
		
        for (int j = 0; j < cols1; ++j){
        	
            std::cin >> matrix1[i][j];
        }
    }
    
    std::cout << "Enter second matrix rows: ";
    std::cin >> rows2;
    
    std::cout << "Enter second matrix cols: ";
    std::cin >> cols2;
    
    std::cout << "Input second matrix: ";
	for (int i = 0; i < rows2; ++i){
		
        for (int j = 0; j < cols2; ++j){
        	
            std::cin >> matrix2[i][j];
        }
    }

    std::cout << std::endl;

    matrixMultiplication(matrix1, matrix2, rows1, rows2, cols1, cols2);

    return 0;
}
