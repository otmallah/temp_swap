/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:13:58 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/11 22:14:14 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort1(t_stack *stacka, t_stack *stackb, t_stack *stack_temp , t_iter *index, int a)
{
	stackb->array = (int *)malloc(sizeof(int) * a);
	ft_sort_param(stack_temp, a);
	ft_sort_all(stacka, stackb, stack_temp, index);
}

void	sort2(t_stack *stacka, t_stack *stackb, t_iter *index, int a)
{
	stackb->array = (int *)malloc(sizeof(int) * a);
	rand_5_num(stacka, stackb, index);
}

void	sort3(t_stack *stacka, t_stack *stack_temp,  t_stack *stackb, t_iter *index, int a)
{
	stackb->array = (int *)malloc(sizeof(int) * a);
	ft_sort_param(stack_temp, a);
	rand_again(stacka ,stack_temp, stackb, index);
}

void	initial(t_iter *index, int a)
{
	index->count = 0;
	index->count2 = 0;
	index->count3 = 0;
	index->count4 = 0;
	index->num_arg = a;
	index->num_sec = a;
}

void	check(char **av)
{
	int i = 1;
	int j = 1;

	while (av[j])
	{
		while (av[i])
		{
			if (i != j)
			{
				if (strcmp(av[j], av[i]) == 0)
				{
					printf("%s", av[i]);
					write(1, "Error\n", 7);
					exit(1);
				}
			}
			i++;
		}
		i = 1;
		j++;
	}
}
