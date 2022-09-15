#include "Data.hpp"
#include <iostream>

void main2(void)
{
	Data *data = new Data;
	Data *after_serialize;
	uintptr_t data_ptr;

	data->num = 42;
	std::cout << "data ptr : " << data << std::endl;
	std::cout << "data num : "<< data->num << std::endl;
	data_ptr = serialize(data);
	after_serialize = deserialize(data_ptr);
	std::cout << "after data ptr : " << data << std::endl;
	std::cout << "after data num : "<< data->num << std::endl;
	delete after_serialize;
}

int main(void)
{
	main2();
	system("leaks a.out");
	return (0);
}