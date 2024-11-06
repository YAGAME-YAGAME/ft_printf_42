/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:35:35 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/06 15:14:21 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "head.h"



void print_byte(byte_t c)
{
	if ((c / 16) < 10)
		ft_putchar(48 + (c /16));
	else
		ft_putchar(87 + (c / 16));

	if ((c % 16) < 10)
		ft_putchar(48 + (c % 16));
	else
		ft_putchar(87 + (c % 16));
}

void	ft_put_address(byte_t *p)
{
	byte_t *add;
	int i = 7;
	add = (byte_t *)p;

	while(i >= 0)
	{
		print_byte(*add);
		add++;
		i--;
	}
}

