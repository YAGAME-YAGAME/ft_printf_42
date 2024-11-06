/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:42:40 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/06 14:32:48 by otzarwal         ###   ########.fr       */
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

		format++;
	}
	va_end(ar);

	return (len);

}
