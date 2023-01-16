/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:47:22 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 10:40:30 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


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
	else
		std::cout << "Object is of type Base" << std::endl;
}

void	identify(Base & p)
{
	try
	{
		A& A_ref = dynamic_cast<A&>(p);
		(void)A_ref;
		std::cout << "Object is of type A" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		B& B_ref = dynamic_cast<B&>(p);
		(void)B_ref;
		std::cout << "Object is of type B" << std::endl;
	}
	catch (std::exception & e)
	{
	}
	try
	{
		C& C_ref = dynamic_cast<C&>(p);
		(void)C_ref;
		std::cout << "Object is of type C" << std::endl;
	}
	catch (std::exception & e)
	{
	}
}
