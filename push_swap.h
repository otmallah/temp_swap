/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:45:46 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/11 22:45:47 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	i;
	int	j;
	int	*array;
}	t_stack;

typedef struct s_iter
{
	int	count;
	int	count2;
	int	count3;
	int	count4;
	int	num_arg;
	int	num_sec;
}	t_iter;

//handler

int		ft_atoi(const char *str);
int		checker(char *str);
void	only_num(char *str);
void	swap_a(t_stack	*stack, t_iter *index);
void	rever_a(t_stack *stack, t_iter *index);
void	r_rev_a(t_stack	*stack, t_iter *index);
void	rand_num(t_stack *stack, t_iter *index);
void	push_b(t_stack	*stack_a, t_stack *stack_b, t_iter *index);
void	rand_5_num(t_stack *stack_a, t_stack *stack_b, t_iter *index);
void	push_a(t_stack *stacka, t_stack *stackb, t_iter *index);
void	ft_sort_param(t_stack *stack_temp , int ac);
void	rand_again(t_stack *stacka, t_stack *stack_temp, t_stack *stackb, t_iter *index);
void	re_b(t_stack *stackb, t_iter *index);
void	r_rev_b(t_stack *stackb , t_iter *index);
void	ft_sort_500(t_stack *stacka, t_stack *stack_temp, t_stack *stackb, t_iter *index);
void	ft_rand_100(t_stack *stacka, t_stack *stack_temp, t_iter *index);
void	ft_sort_all(t_stack *stacka, t_stack *stackb, t_stack *stack_temp, t_iter *index);
void	sort1(t_stack *stacka, t_stack *stackb, t_stack *stack_temp, t_iter *index, int a);
void	sort2(t_stack *stacka, t_stack *stackb, t_iter *index, int a);
void	sort3(t_stack *stacka, t_stack *stack_temp,  t_stack *stackb, t_iter *index, int a);
void	initial(t_iter *index, int a);
void	check(char **av);

#endif
