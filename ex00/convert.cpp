#include "main.hpp"

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
	double	nb = strtod(literal.c_str(), NULL);

	if (nb < static_cast<double>(32) || nb > static_cast<double>(126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (nb > static_cast<double>(INT_MAX) || nb < static_cast<double>(INT_MIN))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	convert_float(std::string literal)
{
	double	nb = strtod(literal.c_str(), NULL);

	if (!literal.compare("nanf") || !literal.compare("+inff") || !literal.compare("-inff") || !literal.compare("inff"))
		std::cout << "char : impossible" << std::endl;
	else if (nb < static_cast<double>(32) || nb > static_cast<double>(126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (!literal.compare("nanf"))
		std::cout << "int: impossible" << std::endl;
	else if (nb > static_cast<double>(INT_MAX) || nb < static_cast<double>(INT_MIN))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	convert_double(std::string literal)
{
	double	nb = strtod(literal.c_str(), NULL);

	if (!literal.compare("nan") || !literal.compare("+inf") || !literal.compare("-inf") || !literal.compare("inf"))
		std::cout << "char : impossible" << std::endl;
	else if (nb < static_cast<double>(32) || nb > static_cast<double>(126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
	if (!literal.compare("nan"))
		std::cout << "int: impossible" << std::endl;
	else if (nb > static_cast<double>(INT_MAX) || nb < static_cast<double>(INT_MIN))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
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
