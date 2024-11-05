/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:33:14 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/05 11:38:35 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "head.h"

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		ft_putnbr(nbr);
	}
	else
		ft_putchar(nbr + 48);
}
