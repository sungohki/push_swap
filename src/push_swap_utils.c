/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:20:38 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/09 20:51:45 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_list *stack, int argc, int *arr)
{
	int		index;
	t_list	*temp;

	index = 0;
	stack = ft_lstnew(&arr[index++]);
	while (index < argc - 1)
	{
		temp = ft_lstnew(&arr[index++]);
		ft_lstadd_back(stack, temp);
	}
}

void	set_pivot(t_list *ex, int *pivot1, int *pivot2)
{
	t_list	*temp;
	int		min;
	int		max;

	temp = ex;
	min = *((int *)ex->content);
	max = *((int *)ex->content);
	while (temp != NULL)
	{
		if (min > *((int *)ex->content))
			min = *((int *)ex->content);
		if (max < *((int *)ex->content))
			max = *((int *)ex->content);
		temp = temp->next;
	}
	*pivot1 = (max + min) / 3;
	*pivot2 = 2 * (*pivot1);
}

int	*atoi_arr(char argc, char *argv[])
{
	int		*result;
	int		index;

	result = (int *)malloc(sizeof(int) * (argc - 1));
	if (result == 0)
		return (NULL);
	index = 0;
	while (index < argc - 1)
	{
		result[index] = ft_atoi(argv[index + 1]);
		index++;
	}
	return (result);
}
