#include <iostream>
#include <cstdlib>

struct Data {
	std::string s1;
	int n;
	std::string s2;
} ;

void * serialize(void)
{

	static char charArray[11] = "0123456789";
	static int intArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	Data *data = new Data();
	int ret = rand() % 10;
	for(int i = 0; i < 8; i++)
	{
		ret = rand() % 10;
		data->s1 += charArray[ret];
	}
	data->n = intArray[ret];
	for(int i = 0; i < 8; i++)
	{
		ret = rand() % 10;
		data->s2 += charArray[ret];
	}
	std::cout << "serialized: " << data->s1 << std::endl;
	std::cout << "serialized: " << data->n << std::endl;
	std::cout << "serialized: " << data->s2 << std::endl;
	std::cout << "total size: [" << sizeof(data->s1) + sizeof(data->n) + sizeof(data->s1) << "]" << std::endl;

	return reinterpret_cast<void *>(data);
}

Data* deserialize(void * raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	srand(time(NULL));

	void *serializedData = serialize();
	Data *data = deserialize(serializedData);

	std::cout << "deserialized: " << data->s1 << std::endl;
	std::cout << "deserialized: " << data->n << std::endl;
	std::cout << "deserialized: " << data->s2 << std::endl;

	delete data;
	return 0;
}