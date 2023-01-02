#ifndef MAIN_HPP
#define MAIN_HPP
#include <iostream>
#include <iomanip>
#include <climits>
#include <cstdlib>
#define CHAR 10
#define INT 11
#define FLOAT 12
#define DOUBLE 13

int		detect_type(std::string literal);
bool	is_char(std::string literal);
bool	is_int(std::string literal);
bool	is_float(std::string literal);
bool	is_double(std::string literal);
void	convert(int type, std::string literal);

#endif
