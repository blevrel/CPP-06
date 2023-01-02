#include "functions.hpp"

int	main(void)
{
	Base	*test_ptr;

	test_ptr = generate();
	identify(test_ptr);
	identify(*test_ptr);
	delete	test_ptr;
	return (0);
}
