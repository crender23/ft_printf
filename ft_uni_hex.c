/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uni_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:23:37 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:23:38 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uni_hex(unsigned long num)
{
	size_t	length;

	length = 0;
	if (num >= 16)
		length = ft_hexes (num / 16);
	length++;
	if ((num % 16) < 10)
		ft_put_char ((char)('0' + (num % 16)));
	if ((num % 16) > 9 && (num % 16) < 16)
		ft_put_char ((char)('W' + (num % 16)));
	return (length);
}
