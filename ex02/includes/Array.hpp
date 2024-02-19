/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:10:43 by ple-stra          #+#    #+#             */
/*   Updated: 2024/02/19 13:32:01 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array {
private:
	T *_elements;
	unsigned int _size;
public:
	Array<T>();
	Array<T>(unsigned int n);
	Array<T>(Array<T> const &src);
	~Array<T>();

	unsigned int size() const;

	Array<T> &operator=(Array<T> const &rhs);
	T &operator[](unsigned int n) const;

	class OutOfBoundsException : public std::exception {
	public:
		virtual const char *what() const throw()
		{
			return ("Array::OutOfBounds");
		}
	};
};

#include "Array.tpp"
