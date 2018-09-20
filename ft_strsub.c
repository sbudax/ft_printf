/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbxaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 15:20:57 by sbxaba            #+#    #+#             */
/*   Updated: 2018/08/15 15:21:10 by sbxaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		i = 0;
		while (i < len)
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
	return (0);
}
