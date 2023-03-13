/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:20:38 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/13 19:15:57 by sungohki         ###   ########.fr       */
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

void	set_pivot(t_list *ex, int *pivot0, int *pivot1)
{
	t_list		*temp;
	int			rank;
	int			min;
	int			max;

	temp = ex;
	min = 0;
	max = 0;
	while (temp->next != NULL)
	{
		rank = *((int *)temp->content);
		if (min > rank)
			min = rank;
		if (max < rank)
			max = rank;
		temp = temp->next;
	}
}
