/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:24:29 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/10 13:56:48 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char *argv[])
{
	t_stack	*stack;
	int i;
	int j;

	if (argc < 2)
		error_message(1);
	stack = contain_in_a(argc, argv);

	i = 0;
	j = stack->a_size;
	printf("stack->a_size = %zu\n", stack->a_size);
	while (j > i)
	{
		printf("A%d = %d\n", i, stack->a[i]);
		i++;
	}
	return (0);
}
