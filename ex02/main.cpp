/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:32:41 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 10:43:40 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

int	main(void)
{
	Base	*test_ptr;

	test_ptr = generate();
	std::cout << "Calling type identifier for pointer : ";
	identify(test_ptr);
	std::cout << "Calling type identifier for reference : ";
	identify(*test_ptr);
	delete	test_ptr;
	return (0);
}
