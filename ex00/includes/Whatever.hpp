/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 02:08:21 by ple-stra          #+#    #+#             */
/*   Updated: 2024/02/17 02:31:24 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template<typename T>
T const &max(T const &a, T const &b)
{
	return (a > b ? a : b);
}
