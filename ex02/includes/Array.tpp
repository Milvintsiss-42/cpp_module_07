/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:24:36 by ple-stra          #+#    #+#             */
/*   Updated: 2024/02/17 20:07:57 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
Array<T>::Array() : _size(0)
{
	this->_elements = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_elements = new T[this->_size]();
}

template <typename T>
Array<T>::Array(Array<T> const &src)
{
	this->_elements = 0;
	*this = src;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_elements;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	delete [] this->_elements;
	this->_size = rhs.size();
	this->_elements = new T[rhs.size()];

	for (unsigned int i = 0; i < rhs.size(); i++)
		this->_elements[i] = rhs[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= this->size())
		throw OutOfBoundsException();
	return this->_elements[n];
}

template <typename T>
T Array<T>::operator[](unsigned int n) const
{
	if (n >= this->size())
		throw OutOfBoundsException();
	return this->_elements[n];
}
