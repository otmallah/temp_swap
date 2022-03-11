/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_otmallah.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:09:18 by otmallah          #+#    #+#             */
/*   Updated: 2022/03/11 19:09:19 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    check_ok_ko(t_stack *stacka, t_iter *index);

int		push(t_stack *stack, t_stack *stackb, int len, int value, t_stack *temp)
{
	if (!stack->array)
		stack->i = 0;
	if (!stack->array)
	{
		//puts("here");
		stack->array = malloc(sizeof(int) * (len));
		stackb->array = malloc(sizeof(int) * (len));
		temp->array = malloc(sizeof(int) * (len));
	}
	if (stack->i == len)
		return 1;
	stack->array[stack->i] = value;
	temp->array[stack->i] = value;
	//printf("staack a = %d \n" , temp->array[stack->i]);
	stack->i++;
	return 0;
}

void    ft_checker_inst(t_stack *stacka, t_stack *stackb, t_iter *index)
{
    char *str;

    str = get_next_line(0);
    if (str == NULL)
        exit(0);
    while (str)
    {
        if ( strcmp(str , "pa") == 0)
            push_a(stacka, stackb, index);
        else if (strcmp(str , "pb") == 0)
            push_b(stacka, stackb, index);
        else if (strcmp(str , "sa") == 0)
            swap_a(stacka, index);
        else if (strcmp(str , "ra") == 0)
            rever_a(stacka, index);
        else if (strcmp(str , "rra") == 0)
            r_rev_a(stacka, index);
        else if (strcmp(str , "rb") == 0)
            re_b(stackb, index);
        str = get_next_line(0);
        puts("hana ");
    }
    check_ok_ko(stacka, index);
}

void	ft_printa(t_stack	*stack , t_iter *index, int a)
{
	puts("--------stack a---------");
	while (index->count3 < a)
	{
		printf("|          %d           |\n" ,  stack->array[index->count3]);
		index->count3++;
	}
}

void    check_ok_ko(t_stack *stacka, t_iter *index)
{
    int i;

    i = 0;
    int a = 0;
    while (i < index->num_arg )
    {
        printf("num == %d && num = %d\n", stacka->array[i] , stacka->array[i + 1]);
        if (stacka->array[i] != a)
        {
            write(1, "KO\n", 3);
            exit(0);
        }
        a++;
        i++;
    }
    write (1, "OK\n", 3);
}

// int main(int ac , char **av)
// {
//     t_stack stacka;
//     t_stack stackb;
//     t_stack stack_temp;
//     t_iter index;
//     int i;
//     int j;
//     int a = ac - 1;

// 	i = 0;
// 	j = 1;
// 	while (i < a)
// 	{
// 		push(&stacka, &stackb, a, ft_atoi(av[j]), &stack_temp);
// 		j++;
// 		i++;
// 	}
//     ft_sort_param(&stack_temp, a);
//     ft_rand_100(&stacka, &stack_temp, &index);
//     ft_checker_inst(&stacka, &stackb, &index);
// }