/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:14:29 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/05 19:08:26 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
#define HEAD_H

#include <stdarg.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int 		ft_printf(const char *fotmar, ...);
void		ft_putstr(char *str);
void		ft_puthexa(char *p);
void 		ft_putchar(char c);
void		ft_putnbr(int nbr);
int			check_format(char str, va_list ar, int *len);

#endif
