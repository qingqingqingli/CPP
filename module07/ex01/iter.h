/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:42:47 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:42:47 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#pragma once

//Test the following code with the student's iter:
//class Awesome
//{
//public:
//	Awesome( void ) : _n( 42 ) { return; }
//	int get( void ) const { return this->_n; }
//private:
//	int _n;
//};
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; }
//int main() {
//	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//	Awesome tab2[5];
//	iter( tab, 5, print );
//	iter( tab2, 5, print );
//	return 0;
//}
//If everything went well, it should display:
//0
//1
//2
//3
//4
//42
//42
//42
//42
//42