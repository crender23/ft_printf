/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:11 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:12 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start (ap, format);
	while (*format)
	{
		if (*format == '%')
			len += ft_display(*(++format), ap);
		else
		{
			ft_put_char(*format);
			len++;
		}
		format++;
	}
	va_end(ap);
	return (len);
}
