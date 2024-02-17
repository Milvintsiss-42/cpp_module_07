/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:36:12 by ple-stra          #+#    #+#             */
/*   Updated: 2024/02/17 20:14:05 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void print_double_array(Array<double> array)
{
	std::cout << "Array: ";
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void print_int_array(Array<int> array)
{
	std::cout << "Array: ";
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int	main(void)
{
	Array<int> int_array = Array<int>();
	Array<int> five_int_array(5);

	print_int_array(int_array);
	print_int_array(five_int_array);
	std::cout << std::endl;

	five_int_array[2] = 5;
	print_int_array(five_int_array);
	std::cout << std::endl;

	Array<int> copy_array(five_int_array);
	copy_array[3] = 6;
	print_int_array(five_int_array);
	print_int_array(copy_array);
	std::cout << std::endl;
	std::cout << std::endl;

	Array<double> double_array = Array<double>();
	Array<double> five_double_array(5);

	print_double_array(double_array);
	print_double_array(five_double_array);
	std::cout << std::endl;

	five_double_array[2] = 5.3;
	print_double_array(five_double_array);
	std::cout << std::endl;

	Array<double> copy_double_array(five_double_array);
	copy_double_array[3] = 6.42;
	print_double_array(five_double_array);
	print_double_array(copy_double_array);
	return (0);
}
