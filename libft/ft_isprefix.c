/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprefix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:34:39 by taegon-i          #+#    #+#             */
/*   Updated: 2020/01/23 19:34:47 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isprefix(const char *str, int base)
{
	size_t	i;

	i = 0;
	if (base == 2 || base == 8 || base == 16)
	{
		if (str[i++] != '0')
			return (false);
		if (base == 2 && (ft_toupper(str[i]) == 'B'))
			return (true);
		if (base == 16 && (ft_toupper(str[i]) == 'X'))
			return (true);
		if (base == 8)
			return (true);
	}
	return (false);
}
