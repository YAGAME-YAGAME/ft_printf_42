/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:16:09 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/07 23:22:18 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char c)
{
	int len;

	len = 0;
	char *base_low = "0123456789abcdef";
	char *base_up = "0123456789ABCDEF";

	if (n >= 16)
	{
		ft_puthexa(n / 16, c);
		ft_puthexa(n % 16, c);
	}
	else
	{
		if (c == 'x')
			len += ft_putchar(base_low[n]);
		else
			len += ft_putchar(base_up[n]);
	}
	return (len);
}
