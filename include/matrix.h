#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include <vector>

template <class T>
class Matrix {
	private:
		int rows, cols;			//number of rows and columns
		bool flag;
		std::vector<std::vector<T>> matrix;
	public:
		Matrix(int, int, bool);	//param Constructor
		~Matrix();				//std Destructor
		T getElement(int, int)const;
		void setElement(int, int);
		int getRows()const;		//Use const
		int getCols()const;
		
		const std::vector<std::vector<T>>& operator[][] (int, int) const;	
		template <typename R> // Don't know about use the same T as parameter to the operator.
		friend std::ostream& operator<< (std::ostream &ost, const Matrix<R> &matrix); //	
		template <typename R>
		friend std::istream& operator<< (std::istream &ist, Matrix<R> &matrix); //	

};

/**
 * @brief Getters and Setters for Matrix Class
 * getRows return the number of rows
 * getCols return the number of columns
 * getElement return a Member element
 * setElement push a <T> type for a relative index on matrix
 * */

template <typename T>
int Matrix<T>::getRows() const{
	return rows;
}

template <typename T>
int Matrix<T>::getCols() const{
	return cols;
}

template <typename T>
T Matrix<T>::getElement(int rows, int cols) const{
	return matrix[rows][cols];

}

template <typename T>
void Matrix<T>::setElement(int pos_rows, int pos_cols){
	matrix[pos_rows][pos_cols];
}

template <typename T>
std::ostream& operator<< (std::ostream &ost, const Matrix<T> &matrix){
	for(int i=0;i<matrix.getCols();i++){	
		for(int j=0;j<matrix.getRows();j++){
			ost<<matrix.getElement(i,j)<<' ';
		}
	ost <<std::endl;
	}
return ost;
}
template <typename T>
const std::vector<std::vector<T>>& operator[][] (int i, int j) const{
	return matrix[i][j];
}

template <typename T>
std::istream& operator>> (std::istream &ist, Matrix<T> &matrix){
	for(int i=0;i<matrix.getCols();i++){
		for(int j=0;j<matrix.getRows();j++){
			ist >> matrix[i][j];
		}
	}
return ist;
}
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

template <typename T>
Matrix<T>::~Matrix(){


}





#endif // __MATRIX_H__
