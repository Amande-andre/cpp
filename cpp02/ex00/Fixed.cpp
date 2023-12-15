/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:21:04 by anmande           #+#    #+#             */
/*   Updated: 2023/12/15 14:30:22 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixe(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructeur call" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(f.getRawBits());
}

Fixed	&Fixed::operator=(const Fixed &f1)
{
	this->setRawBits(f1.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixe);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixe = raw;
}
