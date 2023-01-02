#include "functions.hpp"

Base	*generate(void)
{
	int	nb;

	srand(time(0));
	nb = rand() % 3;
	switch (nb)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object is of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object is of type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object is of type C" << std::endl;
}

void	identify(Base & p)
{
	//ptr ?
	identify(&p);
}
