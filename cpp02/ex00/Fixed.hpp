/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:21:10 by anmande           #+#    #+#             */
/*   Updated: 2023/12/15 14:29:43 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _fixe;
        int static const _bit = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed &operator=(const Fixed &f1);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif