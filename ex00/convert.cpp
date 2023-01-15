/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:57:18 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/15 10:39:06 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.hpp"
#include <climits>
#include <cstdlib>
#include <iomanip>

void	convert_char(std::string literal)
{
	char	c = literal[0];

	if (c < 32 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	convert_int(std::string literal)
{
	int	nb;

	std::stringstream(literal) >> nb;
	if (nb < 0 || nb > 255)
		std::cout << "char : Impossible" << std::endl;
	else if (nb < 32 || nb > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	convert_float(std::string literal)
{
	float	nb;

	std::stringstream(literal) >> nb;
	if (!literal.compare("nanf") || !literal.compare("+inff") || !literal.compare("-inff") || !literal.compare("inff") || nb < 0 || nb > 255)
		std::cout << "char : impossible" << std::endl;
	else if (nb < static_cast<float>(32) || nb > static_cast<float>(126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (!literal.compare("nanf"))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << nb << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	convert_double(std::string literal)
{
	double	nb;

	std::stringstream(literal) >> nb;
	if (!literal.compare("nan") || !literal.compare("+inf") || !literal.compare("-inf") || !literal.compare("inf") || nb < 0 || nb > 255)
		std::cout << "char : impossible" << std::endl;
	else if (nb < 3 || nb > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (!literal.compare("nan"))
		std::cout << "int: impossible" << std::endl;
	else if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << nb << std::endl;
}

void	convert(int type, std::string literal)
{
	if (type == CHAR)
		convert_char(literal);
	else if (type == INT)
		convert_int(literal);
	else if (type == FLOAT)
		convert_float(literal);
	else if (type == DOUBLE)
		convert_double(literal);
}
