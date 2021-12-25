/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:19 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:20 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexes(long numb)
{
	size_t	length;

	length = 0;
	if (numb < 0)
		numb += 4294967296;
	if (numb >= 16)
		length = ft_hexes (numb / 16);
	length++;
	if ((numb % 16) < 10)
		ft_put_char ((char)('0' + (numb % 16)));
	if ((numb % 16) > 9 && (numb % 16) < 16)
		ft_put_char ((char)('W' + (numb % 16)));
	return (length);
}
