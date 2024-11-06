/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:14:29 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/06 15:07:10 by otzarwal         ###   ########.fr       */
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
void		ft_putstr(char *str);
void		ft_puthexa(char c);
void 		ft_putchar(char c);
void		ft_put_address(byte_t *p);
void		ft_putnbr(int nbr);
int			check_format(char str, va_list ar, int *len);

#endif
