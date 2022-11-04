#include <iostream>

int main()
{
	
	//Task 2.1
    /*int n, m;
    
    std::cout << "Input n, m numbers: ";
    std::cin >> n >> m;
    
    for (int i = 0; i < m; i++) {       
        for (int j = 0; j < n; j++) {
            std::cout << "-";
        }
        std::cout << std::endl;
	}*/
	
	//Task 2.2
	int n;
    
    std::cout << "Input n number: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {       
        for (int j = 0; j < n; j++) {
            std::cout << "-";
        }
        std::cout << std::endl;
	}
    return 0;
}
