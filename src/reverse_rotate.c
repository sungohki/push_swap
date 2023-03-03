/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:54:38 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/03 19:26:54 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate_node(t_list *ex)
{
	t_list	*ex_last_2nd;
	t_list	*ex_last;

	if (ex == 0)
		return ;
	ex_last_2nd = ex;
	while (ex_last_2nd->next->next != 0)
		ex_last_2nd = ex_last_2nd->next;
	ex_last = ex_last_2nd->next;
	ex_last->next = ex;
	ex_last_2nd->next = NULL;
	ex = ex_last;
}

void	rra(t_list *a)
{
	reverse_rotate_node(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list *b)
{
	reverse_rotate_node(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list *a, t_list *b)
{
	reverse_rotate_node(a);
	reverse_rotate_node(b);
	write(1, "rrr\n", 4);
}
