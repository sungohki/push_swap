/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:43:26 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/13 17:44:41 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_node(t_list *ex)
{
	t_list		*ex_1st_last;
	t_list		*ex_2nd_last;
	t_list		*ex_3rd_last;

	if (ft_lstsize(ex) > 1)
	{
		ex_1st_last = ft_lstlast(ex);
		ex_3rd_last = ex;
		while (ex_3rd_last->next->next != ex_1st_last)
			ex_3rd_last = ex_3rd_last->next;
		ex_2nd_last = ex_3rd_last->next;
		ex_1st_last->next = ex_2nd_last;
		ex_3rd_last->next = ex_1st_last;
		ex_2nd_last->next = 0;
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
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	swap_node(a);
	swap_node(b);
	write(1, "ss\n", 3);
}
