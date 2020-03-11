/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:24:29 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/11 12:33:30 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_stack	*stack;
	size_t i;
	// int j;

	if (argc < 2)
		error_message(1);
	stack = contain_in_a(argc, argv);

	// ft_putnbr(stack->a[0]);
	// write(1, "\n", 1);
	// ft_putnbr(stack->a[1]);
	// write(1, "\n", 1);
	// ft_putnbr(stack->a[2]);
	// write(1, "\n", 1);

	i = 0;
	printf("stack->a_size = %zu\n", stack->a_size);
	while (stack->a_size > i)
	{

		// write(1, "A", 1);
		// ft_putnbr(i);
		// write(1, " = ", 1);
		// ft_putnbr(stack->a[i]);
		// write(1, "\n", 1);
		printf("A%zu = %d\n", i, stack->a[i]);
		i++;
	}
	return (0);
}
