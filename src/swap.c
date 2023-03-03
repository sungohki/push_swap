/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:43:26 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/03 18:40:16 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_node(t_list *ex)
{
	t_list		*ex2;
	t_list		*ex3;

	if (ft_lstsize(ex) > 1)
	{
		ex2 = ex->next;
		ex3 = ex2->next;
		ex->next = ex3;
		ex2->next = ex;
		ex = ex2;
	}
}

void	sa(t_list *a)
{
	swap_node(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	swap_node(b);
	write(1, "sa\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	swap_node(a);
	swap_node(b);
	write(1, "ss\n", 3);
}
