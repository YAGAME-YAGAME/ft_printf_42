/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:15:04 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/06 13:44:38 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int			check_format(char str,va_list ar, int *len)
{

	int l = *len;
	if (str == 'c')
	{
		ft_putchar(*(va_arg(ar, char *)));
		l++;

	}
	else if (str == 'd')
	{
		ft_putnbr(va_arg(ar, int));
	}
	else if (str == 's')
	{
		ft_putstr(va_arg(ar, char *));
	}
	return (l);
}
