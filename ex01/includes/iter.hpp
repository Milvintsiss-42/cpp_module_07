/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 02:08:21 by ple-stra          #+#    #+#             */
/*   Updated: 2024/02/17 18:03:14 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>

template<typename T>
void iter(T *array, size_t size, void (*fun)(T &element))
{
	while (size--)
	{
		fun(*array);
		array++;
	}
}
