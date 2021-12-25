/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_uni_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:26 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:27 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_uni_int(va_list ap)
{
	long	integer;

	integer = va_arg(ap, int);
	if (integer < 0)
		integer += 4294967296;
	ft_put_nbr(integer);
	return (ft_num_len(integer));
}
