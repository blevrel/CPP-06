#ifndef MAIN_HPP
#define MAIN_HPP
#include <iostream>
#include <stdint.h>

typedef struct	s_data
{
	float		nb;
	char		c;
	std::string	str;
	
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
