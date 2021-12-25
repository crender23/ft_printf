/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:30 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:24:31 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_str(va_list ar)
{
	char	*str;

	str = va_arg(ar, char *);
	if (str == 0)
	{
		ft_put_str("(null)");
		return (6);
	}
	ft_put_str(str);
	return (ft_strlen(str));
}
