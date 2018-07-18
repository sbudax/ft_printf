/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:44:30 by sbxaba            #+#    #+#             */
/*   Updated: 2018/07/18 14:15:26 by sbxaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_
#define FT_PRINTF_H_

#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef	struct	s_mod
{
	int			hh:1;
	int			h:1;
	int			l:1;
	int			ll:1;
	int			j:1;
	int			z:1;
	int			none;
}				t_mod;

int		ft_printf(const char *format, ...);
char	*fmt_s(va_list ap, t_mod mods);

#endif
