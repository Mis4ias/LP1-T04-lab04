#ifndef __MATRIX_H__
#define __MATRIX_H__
#include <iostream>
#include <vector>

template <typename T>
class Matrix {
	private:
		//int rows, cols;			//number of rows and columns
		std::vector<std::vector<T>> vect;
	public:
		Matrix(int, int, bool);		//param Constructor
		void print();	
		//~Matrix();				//std Destructor
		//void setRows(int yy);
		//void setCols(int xx);
		//int getRows();
		//int getCols();
};
template <typename T>
Matrix<T>::Matrix(int cols, int rows, bool flag){
	for(int i=0;i<cols;i++){
		for(int j=0;j<rows;j++){
			vect.push_back(0);
		}
	}

}

template <typename T>
void Matrix<T>::print(){
	for(unsigned i=0;i<vect.size();i++){	
		for(unsigned j=0;i<vect[i].size();j++){
			std::cout<<vect[i][j]<<std::endl;
		}
	}
}
/*
template <typename T>
Matrix<T>::Matrix(int cols, int rows, bool flag){
	if(flag == true){
		for(int i=0;i<cols;i++){
			std::vector<T> row;
			for(int j=0;j<rows;j++){
				row.push_back[j);
			}
		matrix.push_back(row);	
		}
	}	
}
*/
/*
template <typename T>
void Matrix<T>::setRows(int yy){
	rows = yy;
}		
template <typename T>
void Matrix<T>::setCols(int xx){
	cols = xx;
}
template <typename T>
int Matrix<T>::getRows(){
	return rows;
}
template <typename T>
int Matrix<T>::getCols(){
	return cols;
}
*/






#endif // __MATRIX_H__
