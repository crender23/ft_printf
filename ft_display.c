/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:49 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:50 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display(char fmt, va_list ar)
{
	if (fmt == 'c')
		return (ft_get_char(ar));
	if (fmt == 's')
		return (ft_get_str(ar));
	if (fmt == 'p')
		return (ft_get_ptr(ar));
	if (fmt == 'd' || fmt == 'i')
		return (ft_get_digit(ar));
	if (fmt == 'u')
		return (ft_get_uni_int(ar));
	if (fmt == 'x')
		return (ft_hexes(va_arg(ar, int)));
	if (fmt == 'X')
		return (ft_hex(va_arg(ar, int)));
	if (fmt == '%')
	{
		ft_put_char('%');
		return (1);
	}
	return (0);
}
