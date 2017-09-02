#include "matrix.h"
#include <iostream>

int main () {
	Matrix<int> Maa(2, 2, true);
	Matrix<int> Mas(2, 2, true);
	std::cin>>Maa;
	std::cout<<Maa;
	std::cin>>Mas;
	std::cout<<Mas;
	

	return 0;
}
