/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:57:04 by sbxaba            #+#    #+#             */
/*   Updated: 2018/08/15 16:29:28 by sbxaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char *fmt, ...)
{
	int		len;
	va_list	va;

	len = 0;
	va_start(va, fmt);
	while (*fmt != '\0')
	{
		if (*fmt != '%')
			len += ft_print_char(*fmt);
		else
		{
			fmt++;
			len += ft_conversion(&(fmt), va);
		}
		fmt++;
	}
	va_end(va);
	return (len);
}
