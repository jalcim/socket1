/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 14:20:15 by jalcim            #+#    #+#             */
/*   Updated: 2013/12/25 01:39:17 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft.h"

int ft_printf (const char *fmt, ...)
{
	va_list ap;
	int *tab_ti;
	unsigned int size;
	double dbl;
	int compt = -1;

	va_start (ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
			{
				fmt++;
				if (*fmt == 'd')
					ft_putnbr(va_arg (ap, int));
				else if (*fmt == 's')
					ft_putstr (va_arg (ap, char *));
				else if (*fmt == 'c')
					ft_putchar (va_arg (ap, int));
				else if (*fmt == 't') // putchar n'affiche pas les 0
				{
					tab_ti = va_arg (ap, int *);
					size = sizeof (tab_ti);
					while (++compt < (int)(size + 1))
						ft_putnbr (tab_ti[compt]);
				}
				else if (*fmt == 'f') //putchar n'affiche pas les nombres reelle
				{
					dbl = va_arg (ap, double);
					ft_putnbr (dbl);
				}
				fmt++;
			}
		else
		{
			ft_putchar (*fmt);
			fmt++;
		}
	}
	va_end (ap);
	return (1);
}
