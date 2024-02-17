/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:36:12 by ple-stra          #+#    #+#             */
/*   Updated: 2024/02/17 18:04:32 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

static void print_int(int &i)
{
	std::cout << i << std::endl;
}

static void multiply_int_by_2(int &i)
{
	i = i * 2;
}

static void print_double(double &d)
{
	std::cout << d << std::endl;
}

static void divide_double_by_3(double &d)
{
	d = d / 3;
}


int	main(void)
{
	int int_array[4] = {1, 3, 2, 5};

	iter(int_array, 4, &print_int);
	iter(int_array, 4, &multiply_int_by_2);
	std::cout << std::endl;
	iter(int_array, 4, &print_int);

	std::cout << std::endl << std::endl;

	double double_array[4] = {1, 3, 2, 5};

	iter(double_array, 4, &print_double);
	iter(double_array, 4, &divide_double_by_3);
	std::cout << std::endl;
	iter(double_array, 4, &print_double);

	return (0);
}
