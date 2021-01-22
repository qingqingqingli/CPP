/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 12:18:13 by qli           #+#    #+#                 */
/*   Updated: 2021/01/21 12:18:13 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Data.hpp"

void * serialize(void)
{

//	char charArray[11] = "0123456789";
//	int intArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//
//	srand(time(NULL));
//	std::string *s1 = new std::string[9];
//	std::string *s2 = new std::string[9];
//	int n = 0;
//	for(int i = 0; i < 8 ; i++)
//	{
//		int ret = rand() % 10;
//		s1[i] = charArray[ret];
//		s2[i] = charArray[ret];
//		n = intArray[ret];
//	}

	std::string s1 = "55555555";
	int n = 9;
	std::string s2 = "33333333";

	std::cout << s1 << std::endl;
	std::cout << n << std::endl;
	std::cout << s2 << std::endl;

	char *raw = new char[sizeof(std::string) * 2 + sizeof(int)];
	memcpy(raw, &s1, sizeof(std::string));
	memcpy(raw + sizeof(std::string), &n, sizeof(int));
	memcpy(raw + sizeof(std::string) + sizeof(int), &s2, sizeof(std::string));

//	delete [] s1;
//	delete [] s2;
	return reinterpret_cast<void *>(raw);
}

Data* deserialize(void * raw)
{
	Data *data = new Data();
	char *rawChar = reinterpret_cast<char*>(raw);

	data->s1 = *reinterpret_cast<std::string*>(rawChar);
	data->n = *reinterpret_cast<int *>(rawChar + sizeof(std::string));
	data->s2 = *reinterpret_cast<std::string*>(rawChar + sizeof(std::string) + sizeof(int));

	return data;
}

int main(void)
{
	void *serializedData = serialize();
	Data *data = deserialize(serializedData);

	std::cout << MAGENTA << data->s1 << RESET << std::endl;
	std::cout << MAGENTA << data->n << RESET << std::endl;
	std::cout << MAGENTA << data->s2 << RESET << std::endl;

	delete [] reinterpret_cast<char *>(serializedData);
	delete data;
	return 0;
}

