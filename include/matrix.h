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
		T getElement(int, int)const;
		~Matrix();				//std Destructor
		int getRows()const;		//Use const
		int getCols()const;
		void print();	
		
		template <typename R> // Don't know about use the same T as parameter to the operator.
		friend std::ostream& operator<< (std::ostream &ost, const Matrix<R> &matrix); //	

};

/**
 * @brief Getters for Matrix Class
 * getRows return the number of rows
 * getCols return the number of columns
 * getElement return a Member element
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
