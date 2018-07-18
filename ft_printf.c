/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:04:05 by sbxaba            #+#    #+#             */
/*   Updated: 2018/07/06 11:30:32 by sbxaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_mod	init_modifiers(void)
{
	t_mod mod;

	mod.hh		= 0;
	mod.h		= 0;
	mod.l		= 0;
	mod.ll		= 0;
	mod.j		= 0;
	mod.z		= 0;
	mod.none	= 0;

	return (mod);
}

int		print_with_fmt(char *(func)(va_list, t_mod), t_mod mods, va_list ap)
{
	int	len = 0;
	char *out;
	out = func(ap, mods);
	len = ft_strlen (out);
	ft_putstr(out);
	return (len);
}

int		format_handler(const char **fmt, va_list ap)
{
	int len;

	len = 0;
	(*fmt)++;
	t_mod mods = len_handler(*fmt);
	if (**fmt == 's')
		len = print_with_fmt(&fmt_s, mods, ap);
	return (len);
}

int		ft_printf(const char *fmt, ...)
{
	va_list ap;
	int		len;
	char	*res;

	len = 0;
	res = ft_strnew(ft_strlen(fmt));
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%'){
			len = len + format_handler(&fmt, ap);
		}
		else
		{
			len++;
			ft_putchar(*fmt);
		}
		fmt++;
	}
	va_end(ap);
	return (len);
}
