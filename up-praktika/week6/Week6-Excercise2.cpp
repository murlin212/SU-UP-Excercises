#include <iostream>
#include <math.h>

void primenumbers(){
	
	for(int i=2; i < 100; ++i){ 
		
		int prime = 0; //0
		
		for(int j=2; j <=sqrt(i); ++j){ 
			
			if(i % j == 0){
				prime = 1;
			}
		}
		
		if(prime == 0){
			std::cout << i << " ";
		}
		
	}
}

int main(){

primenumbers();

}
