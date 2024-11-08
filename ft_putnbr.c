/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:33:14 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/07 23:22:24 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_putnbr(long long nbr)
{
	int len;

	len = 0;
	if (nbr == -2147483648)
		len += write(1, "-2147483648", 11);
	else if (nbr >= 10)
	{
		len += ft_putnbr(nbr / 10);
		len += ft_putnbr(nbr % 10);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		len += write(1, "-", 1);
		ft_putnbr(nbr);
	}
	else
		len +=ft_putchar(nbr + 48);

	return (len);
}
