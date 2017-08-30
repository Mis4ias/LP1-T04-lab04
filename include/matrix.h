#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include <vector>

template <typename T>
class Matrix {
	private:
		int rows, cols;			//number of rows and columns
		bool flag;
		std::vector<std::vector<T>> matrix;
	public:
		Matrix(int, int, bool);		//param Constructor
		void print();	
		~Matrix();				//std Destructor
};
template<typename T>
std::ostream& operator<< (std::ostream &ost, const Matrix<T> &matrix);
template <typename T>
Matrix<T>::Matrix(int cols_pub, int rows_pub, bool flag_pub){
	this->rows = rows_pub;
	this->cols = cols_pub;
	this->flag = flag_pub;

	if(flag_pub == true){
		for(int i=0;i<cols_pub;i++){
			std::vector<int> vect;
			for(int j=0;j<rows_pub;j++){
				vect.push_back(j);
			}
		matrix.push_back(vect);
		}
	}

}
/*
template <typename T>
void Matrix<T>::print(){
	for(int i=0;i<this->cols;i++){	
		for(int j=0;j<this->rows;j++){
			std::cout<<matrix[i][j]<<' ';
		}
	std::cout<<std::endl;
	}
}*/
template <typename T>
Matrix<T>::~Matrix(){


}





#endif // __MATRIX_H__
