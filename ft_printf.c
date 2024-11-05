/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:42:40 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/05 23:34:28 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int ft_printf(const char *format, ...)
{
	va_list ar;
	int len;

	len = 0;
	va_start(ar, format);
	while(*format)
	{
		if(*format == '%')
			len += check_format(*++format, ar , &len);

		// else
		// {
		// 	printf("hi");
		// 	if (*format)
		// 	{
		// 		ft_putchar(*format);
		// 		len++;

		// 	}
		// 	else
		// 		return len;
		// }
		format++;
	}
	va_end(ar);

	return (len);

}
