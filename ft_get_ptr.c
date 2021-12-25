/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:35 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:36 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_ptr(va_list ar)
{
	size_t	ptr;

	ptr = (size_t)va_arg(ar, void *);
	ft_put_str("0x");
	return (1 + 1 + ft_uni_hex(ptr));
}
