#ifndef DATA_HPP
#define DATA_HPP
#include <cstdint>
typedef struct s_Data
{
	int num;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif