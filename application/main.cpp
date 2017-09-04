#include "matrix.h"
#include <iostream>
#include <cassert>
int main () {
	Matrix<int> Maa(2, 2, true);
	Matrix<int> Mab(3, 2);
	std::cin>>Maa;
	std::cout<<Maa;
//	Matrix<int> Mas(Maa);
	std::cin>>Mab;
	std::cout<<Mab;
//	Mab = Mas;
	if(Maa == Mab){  
		std::cout<<"eeee"; 
	}
	assert(Maa == Mab);
//	assert(Maa == Mas);
	return 0;
}
