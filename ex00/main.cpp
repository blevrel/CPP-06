/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:57:17 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 09:31:14 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.hpp"

int	detect_type(std::string literal)
{
	if (!literal[0])
		return (0);
	if (is_char(literal) == true)
		return (CHAR);
	if (is_int(literal) == true)
		return (INT);
	if (is_float(literal) || !literal.compare("nanf") || !literal.compare("+inff") || !literal.compare("-inff") || !literal.compare("inff"))
		return (FLOAT);
	if (is_double(literal) || !literal.compare("nan") || !literal.compare("+inf") || !literal.compare("-inf") || !literal.compare("inf"))
		return (DOUBLE);
	return (0);
}

bool	is_char(std::string literal)
{
	if (literal.size() == 1 && literal.find_first_of("0123456789") == std::string::npos)
		return (true);
	return (false);
}

bool	is_int(std::string literal)
{
	size_t	pos;
	int		nb_test;

	if (!(std::stringstream(literal) >> nb_test))
		return (false);
	pos = 0;
	if (literal.find("-", pos) == 0 || literal.find("+", pos) == 0)
		pos = 1;
	if (literal.size() > 0 && literal.find_first_not_of("0123456789", pos) == std::string::npos)
		return (true);
	return (false);
}

bool	is_float(std::string literal)
{
	size_t		i = 0;
	size_t		count = 0;
	size_t		size = literal.size();
	std::string	charset = ".0123456789";

	if (literal[i] == '-' || literal[i] == '+')
	{
		if (size == 2)
			return (false);
		i++;
	}
	while (i < size && charset.find(literal[i]) != std::string::npos)
	{
		if (literal[i] == '.')
		{
			if (i == size - 1 || i == size - 2)
				return (false);
			count++;
		}
		i++;
	}
	if (count <= 1 && i + 1 == size && literal[size - 1] == 'f')
		return (true);
	return (false);
}

bool	is_double(std::string literal)
{
	size_t		i = 0;
	size_t		count = 0;
	size_t		size = literal.size();
	std::string	charset = ".0123456789";

	if (literal[i] == '-' || literal[i] == '+')
		i++;
	while (i < size && charset.find(literal[i]) != std::string::npos)
	{
		if (literal[i] == '.')
		{
			if (i == size - 1)
				return (false);
			count++;
		}
		i++;
	}
	if (count <= 1 && i == size)
		return (true);
	return (false);
}

int	main(int argc, char **argv)
{
	int		type;

	std::string	literal;

	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " \"literal to convert\"" << std::endl;
		return (-1);
	}
	literal = argv[1];
	type = detect_type(literal);
	if (type == 0)
		std::cout << "Invalid type" << std::endl;
	else
		convert(type, literal);
	return (0);
}
