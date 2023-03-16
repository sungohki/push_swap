/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:56:34 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/16 18:53:30 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	init_sorting(t_list *ex, int *count, int range)
{
	int		pivot;

	pivot = set_pivot(ex, range);
	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	return (pivot);
}

static int	partitioning(t_list *a, t_list *b, int pivot)
{
	int	result;

	if (*((int *)(ft_lstlast(a)->content)) <= 2 * pivot)
	{
		pb(a, b);
		result = 0;
		if (*((int *)(ft_lstlast(b)->content)) <= pivot)
		{
			rb(b);
			result = 1;
		}
	}
	else
	{
		ra(a);
		result = 2;
	}
	a = a->next;
	return (result);
}

void	stack_a_to_b(t_list *a, t_list *b, int range)
{
	t_list	*temp;
	int		pivot;
	int		index;
	int		count[3];

	if (range == 1)
		return ;
	temp = a;
	pivot = init_sorting(a, count, range);
	while (range-- > 0)
	{
		count[partitioning(temp, b, pivot)]++;
	}
	index = 0;
	while (index < count[2])
	{
		rra(a);
		index++;
	}
	stack_a_to_b(a, b, count[2]);
	stack_b1_to_a(a, b, count[0], count[1]);
}

void	stack_b1_to_a(t_list *a, t_list *b, int range, int range2)
{
	t_list	*temp;
	int		pivot;
	int		count[3];

	if (range == 1)
	{
		pa(a, b);
		return ;
	}
	temp = b;
	pivot = init_sorting(b, count, range);
	while (range-- > 0)
	{
		// count[partitioning]
	}
}
