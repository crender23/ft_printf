/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:22 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:23 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(long num)
{
	size_t	length;

	length = 0;
	if (num < 0)
		num += 4294967296;
	if (num >= 16)
		length = ft_hex (num / 16);
	length++;
	if ((num % 16) < 10)
		ft_put_char ((char)('0' + (num % 16)));
	if ((num % 16) > 9 && (num % 16) < 16)
		ft_put_char ((char)('7' + (num % 16)));
	return (length);
}
