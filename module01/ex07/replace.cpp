/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/26 22:34:32 by qli           #+#    #+#                 */
/*   Updated: 2020/11/26 22:34:32 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

//find out how to represent a filename
// open file
// write contents to FILENAME.replace, after replacing every occurrence of s1 with s2
// handle error as best as you can
// don't use the c file manipulation functions
int	replace(const char *fileName, std::string s1, std::string s2){

	std::ifstream ifs(fileName);
	std::cout << ifs << std::endl;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	ifs.close();
	return 0;
}

int	main(){
	const char *fileName = "test.txt";
	std::string s1 = "he";
	std::string s2 = "she";
	replace(fileName, s1, s2);
	return 0;
}
