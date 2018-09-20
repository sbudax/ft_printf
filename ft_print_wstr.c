/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_wstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:48:46 by sbxaba            #+#    #+#             */
/*   Updated: 2018/08/17 14:17:08 by sbxaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_wstr(wchar_t *wstr, int precision)
{
	int	res;

	res = 0;
	if (wstr == NULL)
		return (ft_print_str("(null)", precision));
	while (*wstr != '\0')
	{
		res += ft_print_wchar(*wstr);
		wstr++;
	}
	return (res);
}
