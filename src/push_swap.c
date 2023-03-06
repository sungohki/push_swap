/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:50:58 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/06 21:09:44 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_list *stack, int argc, char **argv)
{
	int		index;
	int		content;
	t_list	*temp;

	index = 1;
	content = ft_atoi(argv[index++]);
	stack = ft_lstnew(&content);
	while (index <= argc - 1)
	{
		content = ft_atoi(argv[index++]);
		temp = ft_lstnew(&content);
		ft_lstadd_back(stack, temp);
	}
}

int	set_pivot(t_list *ex)
{
	int		min;
	int		max;

	min = *((int *)ex->content);
	max = *((int *)ex->content);
	while (ex->next == NULL)
	{
		if (min > *((int *)ex->content))
			min = *((int *)ex->content);
		if (max < *((int *)ex->content))
			max = *((int *)ex->content);
	}
	return ((max + min) / 3);
}

void	push_swap(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (error_check(argc, argv))
	{
		write(1, "Error\n", 6);
		return ;
	}
	else
	{
		fill_stack(stack_a, argc, argv);
	}
}
