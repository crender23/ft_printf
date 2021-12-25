/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:39 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:40 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_digit(va_list ar)
{
	long	integer;

	integer = va_arg(ar, int);
	ft_put_nbr(integer);
	return (ft_num_len(integer));
}
