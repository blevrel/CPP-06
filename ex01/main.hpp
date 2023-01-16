/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:37:40 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 09:37:52 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
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
