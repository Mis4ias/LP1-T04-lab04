#include "matrix.h"
#include <vector>
int main(){
	Matrix<int> matrix(2, 2, true);
	std::cin>>matrix;
	std::cout<<matrix;
	return 0;
}


