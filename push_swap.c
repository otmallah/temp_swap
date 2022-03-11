/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:07:43 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/11 22:07:46 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push(t_stack *stack, int len, int value, t_stack *temp)
{
	if (!stack->array)
		stack->i = 0;
	if (!stack->array)
	{
		stack->array = malloc(sizeof(int) * (len));
		temp->array = malloc(sizeof(int) * (len));
	}
	if (stack->i == len)
		return 1;
	stack->array[stack->i] = value;
	temp->array[stack->i] = value;
	stack->i++;
	return 0;
}

int main(int ac, char **av)
{
	int i;
	int j;
	t_stack stack;
	t_stack stackb;
	t_stack stack_temp;
	t_iter index;

	i = 0;
	j = 1;
	initial(&index, (ac - 1));
	if (ac == 1)
		exit(0);
	if (ac > 2)
	{
		while (av[j])
		{
			only_num(av[j]);
			j++;
		}
		check(av);
		i = 0;
		j = 1;
		while (i < (ac - 1))
		{
			push(&stack, (ac - 1), ft_atoi(av[j]), &stack_temp);
			j++;
			i++;
		}
		if (ac == 4)
			rand_num(&stack, &index);
		else if (ac != 101 && ac != 501 && ac )
			sort1(&stack, &stackb, &stack_temp, &index, (ac - 1));
		else if (ac == 6)
			sort2(&stack, &stackb, &index, (ac - 1));
		else if (ac == 101 || ac == 501)
			sort3(&stack, &stack_temp, &stackb, &index, (ac - 1));
	}
}
