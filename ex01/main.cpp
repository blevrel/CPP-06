/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:35:37 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/15 10:29:37 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.hpp"

int	main(void)
{
	Data		data;
	Data		*data_ptr1;
	Data		*data_ptr2;
	uintptr_t	serialized;

	data_ptr1 = &data;
	data.nb = 42.4242;
	data.c = 'z';
	data.str = "Hello world!";
	
	std::cout << "Before serialization : " << std::endl
	<< "nb : " << data_ptr1->nb << std::endl
	<< "c : " << data_ptr1->c << std::endl
	<< "str : " << data_ptr1->str << std::endl << std::endl;

	serialized = serialize(data_ptr1);
	std::cout << "After serialization : " << serialized << std::endl << std::endl;

	data_ptr2 = deserialize(serialized);
	std::cout << "After deserialization : " << std::endl
	<< "nb : " << data_ptr2->nb << std::endl
	<< "c : " << data_ptr2->c << std::endl
	<< "str : " << data_ptr2->str << std::endl;
	return (0);
}
