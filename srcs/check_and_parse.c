/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:52:28 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/10 14:16:00 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		add_in_stack(t_stack *stack, int elem, int i)
{
	int a[stack->a_size];

	stack->a = a;
	stack->a[i] = elem;
}

void	parse_array(t_stack *stack, int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (!ft_isint(argv[i]))
			error_message(4);
		add_in_stack(stack, ft_atoi(argv[i]), i);
		i++;

	}
}

void	parse_string(t_stack *stack, char *str)
{
	char	**numbers;
	size_t	i;


	numbers = ft_strsplit(str, ' ');
	i = 0;
	while (numbers[i])
	{
		if (!ft_isnum(numbers[i], 10))
			error_message(2);
		if (!ft_isint(numbers[i]))
			error_message(4);
		ft_putnbr(ft_atoi(numbers[1]));
		add_in_stack(stack, ft_atoi(numbers[i]), i);
		i++;

	}
	ft_strsplit_free(&numbers);
}


t_stack		*contain_in_a(int argc, char *argv[])
{
	t_stack *stack;
	size_t count;

	if (!(stack = (t_stack *)ft_memalloc(sizeof(t_stack))))
		error_message(3);

	stack->a_size = 0;
	stack->b_size = 0;


	if (argc == 2)
	{
		count = len_string(argv[1]);
		stack->a_size = count;
		parse_string(stack, argv[1]);
	}
	else
	{
		count = len_array(argv);
		ft_putnbr(count);
		stack->a_size = count;
		parse_array(stack, argc, argv);
	}
	return (stack);
}
