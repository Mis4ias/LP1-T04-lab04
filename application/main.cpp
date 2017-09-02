#include "matrix.h"
#include <iostream>
#include <cassert>
int main () {
	Matrix<int> Maa(2, 2, true);
	Matrix<int> Mab(2, 2);
	std::cin>>Maa;
	std::cout<<Maa;
	Matrix<int> Mas(Maa);
	std::cin>>Mab;
	std::cout<<Mab;
	Mab = Mas;
	
	assert(Maa == Mab);
	assert(Maa == Mas);
	return 0;
}
