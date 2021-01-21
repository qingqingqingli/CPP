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
#include "Data.h"

void * serialize(void)
{
	char s1[9] = "22222222"; // size 9
	int i = 7;
	char* s2 = reinterpret_cast<char *>(&i); // size 8
	char s3[9] = "11111111"; // size 9

	char* array = new char[strlen(s1) + strlen(s2) + strlen(s3) + 1];
	strcpy(array, s1);
	if (*reinterpret_cast<int *>(s2) == 0)
	{
		strcpy(array + strlen(s1) + 1, s2);
		strcpy(array + strlen(s1) + strlen(s2) + 1, s3);
	}
	else
	{
		strcpy(array + strlen(s1), s2);
		strcpy(array + strlen(s1) + strlen(s2), s3);
	}

	std::cout << "concatenated array size : " << strlen(array) << std::endl;
	void *serialized = reinterpret_cast<void *>(array);
	return serialized;
}

Data* deserialize(void * raw)
{
	char *deserialized = reinterpret_cast<char *>(raw);

	char s1[9];
	memcpy(s1, deserialized, 8);
	s1[8] = '\0';
	std::string string1 = static_cast<std::string>(s1);

	int i = static_cast<int>(deserialized[8]);
	std::cout << "i is: " << i << std::endl;

	char s2[9];
	memcpy(s2, deserialized + 9, 8);
	s2[8] = '\0';
	std::string string2 = static_cast<std::string>(s2);

	Data* data = new Data(string1, string2);
	return data;
}

int main(void)
{
	void * ptr = serialize();
	Data *data = deserialize(ptr);

	std::cout << MAGENTA << data->getS1() << RESET << std::endl;
	std::cout << MAGENTA << data->getS2() << RESET << std::endl;

	delete [] reinterpret_cast<char *>(ptr);
	delete data;
	return 0;
}

