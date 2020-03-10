/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:13:29 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/10 14:35:05 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t len_string(char *str)
{
	size_t count;
	size_t i;

	i = 1;
	count = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			count++;
			i++;
		}
		else
			i++;
	}
	if (str[i - 1] != ' ')
		count++;
	return (count);

}

size_t len_array(char **str)
{
	size_t count;
	size_t i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			count++;
			i++;
		}
		else
			i++;
	}
	if (str[i - 1] != ' ')
		count++;
	return (count);
}
