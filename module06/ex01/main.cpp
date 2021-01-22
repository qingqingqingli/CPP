#include <iostream>
#include <cstring>

struct Data {
	std::string s1;
	int n;
	std::string s2;
} ;

void * serialize(void)
{
	std::string s1 = "55555555";
	int n = 9;
	std::string s2 = "33333333";

	std::cout << s1 << std::endl;
	std::cout << n << std::endl;
	std::cout << s2 << std::endl;

	char *raw = new char[sizeof(std::string) * 2 + sizeof(int)]();
	memcpy(raw, &s1, sizeof(std::string));
	memcpy(raw + sizeof(std::string), &n, sizeof(int));
	memcpy(raw + sizeof(std::string) + sizeof(int), &s2, sizeof(std::string));

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

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;

	delete [] reinterpret_cast<char *>(serializedData);
	delete data;
	return 0;
}