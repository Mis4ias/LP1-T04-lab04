#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include <vector>

template <class T>
class Matrix {
	private:
		int rows, cols;			
		bool flag;
		std::vector<std::vector<T>> matrix_at;
	public:
		Matrix(int rows_pub, int cols_pub, bool flag_pub) : rows(rows_pub), cols(cols_pub), flag(flag_pub){
			if(flag_pub == true){
				for(int i=0;i<cols_pub;i++){
					std::vector<int> vect;
					for(int j=0;j<rows_pub;j++){
						vect.push_back(j);
					}
				matrix_at.push_back(vect);
				}
			}
		}
		Matrix(){  }
		
		~Matrix(){	}				
		
		Matrix(const Matrix& to_copy){
			matrix_at = to_copy.matrix_at;
			rows = to_copy.rows;
			cols = to_copy.cols;
		}
		
		T getElement(int rows, int cols)const { return matrix_at[rows][cols]; }
		int getRows()const { return rows; }		
		int getCols()const { return cols; }
		
		
		Matrix& operator = (const Matrix& operator_right);
		
		const Matrix operator + (const Matrix& operator_right);
		const Matrix operator - (const Matrix& operator_right);
		template <typename R> // Don't know about use the same T as parameter to the operator.
		friend std::ostream& operator<< (std::ostream &ost, const Matrix<R> &matrix); //	
		//template <typename R>
		//friend std::istream& operator<< (std::istream &ist, Matrix<R> &matrix); //	
};









/**
 * @brief Operators Overloads
 **/

/** @brief Operador de = */
template <typename T>
Matrix<T>& Matrix<T>::operator = (const Matrix& operator_right){
	this->matrix_at = operator_right.matrix_at;
	this->rows = operator_right.rows;
	this->cols = operator_right.cols;
	return *this;
}

/** @brief Operador de + */
template <typename T>
const Matrix<T> Matrix<T>::operator + (const Matrix& operator_right){
	Matrix<T> result = operator_right;
	for(int i=0;i<this->cols;i++){
		for(int j=0;j<this->rows;j++){
			result.matrix_at[i][j] = this->matrix_at[i][j] + operator_right.matrix_at[i][j];
		}
	}
return result;
}

/** @brief Operador de - */
template <typename T>
const Matrix<T> Matrix<T>::operator - (const Matrix& operator_right){
	Matrix<T> result = operator_right;
	for(int i=0;i<this->cols;i++){
		for(int j=0;j<this->rows;j++){
			result.matrix_at[i][j] = this->matrix_at[i][j] - operator_right.matrix_at[i][j];
		}
	}
return result;
}

/** @brief Operador de saida de fluxo */
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

/** @brief Operadore de entrada de fluxo ainda em construcao */
template <typename T>
std::istream& operator>> (std::istream &ist, Matrix<T> &matrix){
	for(int i=0;i<matrix.getCols();i++){
		for(int j=0;j<matrix.getRows();j++){
			//ist >> matrix.rows;
		}
	}
return ist;
}







#endif // __MATRIX_H__
