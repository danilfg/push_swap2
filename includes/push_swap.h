/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:46 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/10 14:33:01 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <../libft/libft.h>
# include <stdio.h>

typedef struct			s_stack
{
	int					*a;
	int					*b;
	size_t				a_size;
	size_t				b_size;
}						t_stack;

/*
**	push_swap.c
*/

int		main(int argc, char *argv[]);

/*
**	error_messages.c
*/

void		error_message(int n);

/*
**	check_and_parse.c
*/

t_stack		*contain_in_a(int argc, char *argv[]);
void		parse_string(t_stack *stack, char *str);
void		parse_array(t_stack *stack, int argc, char **argv);
void		add_in_stack(t_stack *stack, int elem, int i);

/*
**	utils.c
*/

size_t len_array(char **str);
size_t len_string(char *str);



// /*
// **	sa_sb_ss.c
// */
//
// void	sa(t_stack_all *stack);
// void	sb(t_stack_all *stack);
// void	ss(t_stack_all *stack);
//
// /*
// **	pa_pb.c
// */
//
// void	pa(t_stack_all *stack_all);
// void	pb(t_stack_all *stack_all);
//
// /*
// **	ra_rb_rr.c
// */
//
// void	ra(t_stack_all *stack);
// void	rb(t_stack_all *stack);
// void	rr(t_stack_all *stack);
//
// /*
// **	rra_rrb_rrr.c
// */
//
// void	rrb(t_stack_all *stack);
// void	rra(t_stack_all *stack);
// void	rrr(t_stack_all *stack);


#endif
