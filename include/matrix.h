#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <vector>

template <typename T>
class Matrix {
	private:
		int rows, cols;			//number of rows and columns
		std::vector<std::vector<T>> &matrix;
	public:
		Matrix(int, int, bool);		//param Constructor
		~Matrix();				//std Destructor
};

Matrix::Matrix(int, int, bool){
	

}







/*
 Private Methods /

template <typename T>
void Matrix::malloc_matrix(){
	
	matrix = new T*[rows];
	for(int i=0;i<rows;i++){
		alloc = new T[cols];
	}
}

 Public Methods 

Matrix::Matrix(int rws, int cls): rows(rws), cols(cls){
	
	malloc_matrix();
	for(int i=0;i<rows;i++){
		for(int j=0;i<cols;j++){
			element[i][j] = 0;
		}
	}
}  

Matrix::Matrix(): rows(1), cols(1){
	
	malloc_matrix();
	element[0][0] = 0;
}

Matrix::~Matrix(){
	
	for(int i=0;i<rows;i++){
			delete [] element[i];
	}
	delete [] element;
}*/
#endif // __MATRIX_H__
