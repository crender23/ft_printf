/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crender <crender@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 23:24:06 by crender           #+#    #+#             */
/*   Updated: 2021/12/24 23:25:26 by crender          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_display(char fmt, va_list ar);
int		ft_get_char(va_list ar);
int		ft_get_digit(va_list ar);
int		ft_get_ptr(va_list ar);
int		ft_get_str(va_list ar);
int		ft_get_uni_int(va_list ap);
int		ft_hex(long num);
int		ft_hexes(long numb);
int		ft_num_len(long num);
int		ft_printf(const char *format, ...);
void	ft_put_char(char str);
void	ft_put_nbr(long i);
void	ft_put_str(char *str);
size_t	ft_strlen(const char *s);
int		ft_uni_hex(unsigned long num);

#endif