/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcremin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:12:12 by jcremin           #+#    #+#             */
/*   Updated: 2019/10/22 10:39:47 by jcremin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fzero(float *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = 0.0f;
		i++;
	}
}