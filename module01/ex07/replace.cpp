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

#define EMPTY_STRING 1
#define INPUT_FAILURE 2
#define OUTPUT_FAILURE 3

#define RESET		"\033[0m"
#define RED			"\033[31m"				/* Red */

void	replaceLine(std::string& line, std::string& s1, std::string& s2) {

	size_t s1Pos = line.find(s1, 0);
	while (s1Pos != std::string::npos){
		line.replace(s1Pos, s1.length(), s2);
		s1Pos = line.find(s1, s1Pos + s2.length());
	}
}

int		replace(std::string& fileName, std::string& s1, std::string& s2){

	if (s1.empty() || s2.empty())
		return EMPTY_STRING;

	std::ifstream inFile;
	inFile.open(fileName.c_str());
	if (!inFile.is_open())
		return INPUT_FAILURE;

	std::string outFileName = fileName + ".replace";
	std::ofstream outFile(outFileName.c_str());
	if (outFile.fail())
		return OUTPUT_FAILURE;

	std::string line;
	while (!inFile.eof()) {
		getline(inFile, line);
		replaceLine(line, s1, s2);
		outFile << line << std::endl;
	}

	inFile.close();
	outFile.close();
	return 0;
}

int 	main(){

	std::string fileName = "input";
	std::string s1 = "he";
	std::string s2 = "she";

	int ret = replace(fileName, s1, s2);
	if (ret == EMPTY_STRING){
		std::cout << RED << "EMPTY STRINGS" << RESET << std::endl;
		return EMPTY_STRING;
	}
	else if (ret == INPUT_FAILURE) {
		std::cout << RED << "FAILURE TO OPEN INPUT FILE" << RESET << std::endl;
		return INPUT_FAILURE;
	}
	else if (ret == OUTPUT_FAILURE) {
		std::cout << RED << "FAILURE TO WRITE TO OUTPUT FILE" << RESET << std::endl;
		return OUTPUT_FAILURE;
	}
	return 0;
}