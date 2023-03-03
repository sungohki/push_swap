/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:54:09 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/03 18:54:47 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_node(t_list *one, t_list *two)
{
	t_list	*temp;

	if (ft_lstsize(two) != 0)
	{
		temp = two->next;
		two->next = one;
		one = two;
		two = temp;
	}
}

void	pa(t_list *a, t_list *b)
{
	push_node(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	push_node(b, a);
	write(1, "pb\n", 3);
}
