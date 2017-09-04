#include <cassert>
#include <iostream>
#include "matrix.h"
/** @brief Zona de teste da classe Matriz
 * A ideia de usar os asserts das operações comparadas as matrizes de input.
 **/
int main(){
	
	/** @brief constructors, copy and assign, last argument is true as default */
	Matrix<int> square(2, 2);
	Matrix<int> square_assign(2, 2);
	Matrix<int> plus_op(2, 2);
	Matrix<int> plus_comp(2, 2);	
	Matrix<int> sub_op(2, 2);
	Matrix<int> sub_comp(2, 2);	
	Matrix<int> mult_op(2, 2);
	Matrix<int> mult_comp(2, 2);
	
	/** @brief Ipunt da matriz principal*/
	std::cout<<"Entrada da Matriz principal.:"<<std::endl;
	std::cin>>square;	
	std::cout<<square;
	std::cout<<"Matriz resultante da soma de 2 matrizes iguais."<<std::endl;
	std::cin>>plus_comp;
	std::cout<<plus_comp;
	std::cout<<"Matriz resultante da multi de 2 matrizes iguais."<<std::endl;
	std::cin>>mult_comp;
	
	/** @brief definicao da copia após a inicialização da matriz a ser usada como referencia */
	Matrix<int> square_copy(square);
	square_assign = square;
	
	/** @brief Operacoes com as matrizes */
	plus_op = square + square_copy;
	sub_op = square - square_copy;
	mult_op = square * square_copy;	
	
	/** @brief asserts utilizados */
	assert(square == square_copy);
	assert(square == square_assign);
	assert(plus_op == plus_comp);
	assert(sub_op == sub_comp);
	assert(mult_op == mult_comp);
}

