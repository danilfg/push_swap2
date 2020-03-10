/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegon-i <taegon-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:46 by taegon-i          #+#    #+#             */
/*   Updated: 2020/03/10 12:43:14 by taegon-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <../libft/libft.h>
# include <stdio.h>

typedef struct			s_stack
{
	int					value;
	struct s_stack		*previous;
	struct s_stack		*next;
	struct s_stack		*last;
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
**	sa_sb_ss.c
*/

void	sa(t_stack_all *stack);
void	sb(t_stack_all *stack);
void	ss(t_stack_all *stack);

/*
**	pa_pb.c
*/

void	pa(t_stack_all *stack_all);
void	pb(t_stack_all *stack_all);

/*
**	ra_rb_rr.c
*/

void	ra(t_stack_all *stack);
void	rb(t_stack_all *stack);
void	rr(t_stack_all *stack);

/*
**	rra_rrb_rrr.c
*/

void	rrb(t_stack_all *stack);
void	rra(t_stack_all *stack);
void	rrr(t_stack_all *stack);


#endif
