/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:20:38 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/16 18:43:25 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*atoi_arr(int num, char *argv[])
{
	int		*result;
	int		index;

	result = (int *)malloc(sizeof(int) * num);
	if (result == 0)
		return (NULL);
	index = 0;
	while (index < num)
	{
		result[index] = ft_atoi(argv[index + 1]);
		index++;
	}
	return (result);
}

int	indexing_arr(int num, int *nodes)
{
	int		index;
	int		sub_index;
	int		rank;

	index = 0;
	while (index < num)
	{
		rank = 1;
		sub_index = 0;
		while (sub_index < num)
		{
			if (index != sub_index && nodes[index] == nodes[sub_index])
				return (0);
			if (nodes[index] > nodes[sub_index])
				rank++;
		}
		nodes[index] = rank;
		index++;
	}
	return (1);
}

// setting stack
void	init_stack(t_list *stack, int num, int *nodes)
{
	int		index;
	t_list	*temp;

	index = 0;
	stack = ft_lstnew(&nodes[index++]);
	while (index < num)
	{
		temp = ft_lstnew(&nodes[index++]);
		ft_lstadd_back(stack, temp);
	}
}

int	set_pivot(t_list *ex, int range)
{
	t_list		*temp;
	int			value;
	int			min;
	int			max;

	temp = ex;
	min = *((int *)temp->content);
	max = min;
	while (temp->next != NULL && range--)
	{
		value = *((int *)(temp->content));
		if (min > value)
			min = value;
		if (max < value)
			max = value;
		temp = temp->next;
	}
	return ((max + min) / 3);
}
