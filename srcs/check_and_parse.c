/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 12:52:28 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/11 12:26:13 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		add_in_stack(t_stack *stack, int elem, int i)
{
	int a[stack->a_size];

	stack->a = a;
	stack->a[i] = elem;
	ft_putnbr(stack->a[i]);
	write(1, "\n", 1);
}

void	parse_array(t_stack *stack, int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
		add_in_stack(stack, ft_atoi(argv[i]), (i - 1));
}

void	parse_string(t_stack *stack, char *str)
{
	char	**numbers;
	size_t	i;
	size_t	j;
	write(1, "1", 1);
	write(1, "\n", 1);

	numbers = ft_strsplit(str, ' ');
	i = 0;
	j = 1;
	while (numbers[i])
	{
		// write(1, "2", 1);
		ft_putnbr(ft_atoi(numbers[i]));
		write(1, "\n", 1);
		add_in_stack(stack, ft_atoi(numbers[i]), i);
		i++;
		j++;

	}
	write(1, "3", 1);
	ft_strsplit_free(&numbers);
}


t_stack		*contain_in_a(int argc, char **argv)
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
		ft_putnbr(count);
		write(1, "\n", 1);

		stack->a_size = count;
		parse_string(stack, argv[1]);
	}
	else
	{
		stack->a_size = argc - 1;
		parse_array(stack, argc, argv);
	}
	return (stack);
}
