/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:40:10 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/07 23:21:51 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int  ft_putstr(char *str)
{
	int len;

	len = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (*str)
		len += ft_putchar(*str++);
	return (len);
}
