/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:14:29 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/07 18:32:24 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
#define HEAD_H

#include <stdarg.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef unsigned char byte_t;

int 		ft_printf(const char *fotmar, ...);

int			ft_putstr(char *str);

int			ft_puthexa(unsigned long n, char c);

int 		ft_putchar(char c);


int			ft_putnbr(long long nbr);

int			check_format( va_list ar, char format);

#endif
