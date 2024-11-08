/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:42:40 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/07 23:21:54 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int			check_format(va_list args, char format)
{
	int len;
	len = 0;
	if (format == 'c')
		len += ft_putchar((va_arg(args, int)));
	else if (format == 'i' || format == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_putnbr(va_arg(args, unsigned int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		len += ft_putstr("0x");
		len += ft_puthexa((unsigned long)va_arg(args, void *), 'x');
	}
	else if (format == 'x' || format == 'X')
		len += ft_puthexa((unsigned long)va_arg(args, void *), format);
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int ft_printf(const char *s, ...)
{
	va_list ar;
	int len;
	int i;

	len = 0;
	i = 0;
	if (!s)
		return (0);
	va_start(ar, s);
	if (!s || (s[0] == '%' && !s[1] ))
		return (-1);
	while(s[i])
	{
		if(s[i] == '%' && s[i + 1])
		{
			i++;
			if (s[i] == '%')
				len += ft_putchar('%');
			else
				len += check_format(ar, s[i]);
		}
		else if (s[i] != '%')
		{
			len += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(ar);
	return (len);
}
