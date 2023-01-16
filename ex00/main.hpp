/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:33:51 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/15 10:38:09 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <sstream>
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
