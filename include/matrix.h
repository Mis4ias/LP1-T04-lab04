#ifndef __MATRIX_H__
#define __MATRIX_H__


template <typename T>
class Matrix {
	private:
		int rows, cols;			//number of rows and columns
		T **element;			//element
		void malloc_matrix();        //allocator
	public:
		Matrix(int, int);		//param Constructor
		Matrix();				//std Constructor
		~Matrix();				//std Destructor	
		};

/** Private Methods **/

template <typename T>
void Matrix::malloc_matrix(){
	
	element = new T*[rows];
	for(int i=0;i<rows;i++){
		alloc = new T[cols];
	}
}

/** Public Methods **/

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
}
#endif // __MATRIX_H__
