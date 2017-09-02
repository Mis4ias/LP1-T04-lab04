#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include <vector>


template <class T>
class Matrix {
	/**@brief a ideia é não utilizar nenhum tipo de atributo para conter o tamanho do array.
	 * todas as operações serão feitas usando os iterators.
	 * O tamanho da matrix é definida via construtor parametrizado.
	 * **/	
	private:	
	std::vector<std::vector<T>> _data;	
	
	public:
	Matrix(size_t end_rows, size_t end_cols, bool flag = true){
		if(flag) _data.resize(end_rows);
		else _data.reserve(end_rows);
			for(size_t ik = 0; ik < end_rows;ik++){
				if(flag) _data[ik].resize(end_cols);
				else _data[ik].reserve(end_cols);
			}
	}
	Matrix(const Matrix& right_object): _data(right_object._data) {	}
	
	void operator= (const Matrix& object){
		_data = object._data;
	}	
	
	bool operator== (const Matrix& right_object){
		typename std::vector<std::vector<T>>::iterator rows;
		typename std::vector<T>::iterator cols;
		typename std::vector<std::vector<T>>::iterator rr;
		typename std::vector<T>::iterator rc;
		if(_data.size() == right_object._data.size()){
			for(rows = _data.begin(); rows != _data.end(); rows++){
				//rr = right_object._data.begin();
				for(cols = rows->begin(); cols != rows->end(); cols ++){
				//	rc = rr->begin();
					if (*cols != *right_object._data.begin()+sizeof(cols)) return false; 
				//	rc++;
				}
			//rr++;
			return true;
			}
		}	
	return false;
	}	
	friend std::ostream& operator <<(std::ostream& out, Matrix<T>& right_object){
		typename std::vector<std::vector<T>>::iterator rows;
		typename std::vector<T>::iterator cols;
			for(rows = right_object._data.begin(); rows != right_object._data.end(); rows++){
				for(cols = rows->begin(); cols!= rows->end(); cols++){
					out<<*cols<<' ';	
				}
			out<<std::endl;
			}
	return out;
	}
	
	friend std::istream& operator >>(std::istream& in, Matrix<T>& right_object){
		typename std::vector<std::vector<T>>::iterator rows;
		typename std::vector<T>::iterator cols;
			for(rows = right_object._data.begin(); rows != right_object._data.end(); rows++){
				for(cols = rows->begin(); cols != rows->end(); cols++){
					in>>(*cols);
				}
			}
	return in;
	} 


};


#endif // __MATRIX_H__
