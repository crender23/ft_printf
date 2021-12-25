/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:15 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:16 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(long num)
{
	size_t	length;

	length = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		length++;
	}
	while (num)
	{
		num /= 10;
		length++;
	}
	return (length);
}
