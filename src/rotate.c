/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:48:38 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/03 19:27:23 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_node(t_list *ex)
{
	t_list	*ex_2nd;
	t_list	*ex_last;

	if (ex == 0)
		return ;
	ex_2nd = ex->next;
	ex_last = ft_lstlast(ex);
	ex->next = NULL;
	ex_last->next = ex;
	ex = ex_2nd;
}

void	ra(t_list *a)
{
	rotate_node(a);
	write(1, "ra\n", 3);
}

void	rb(t_list *b)
{
	rotate_node(b);
	write(1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b)
{
	rotate_node(a);
	rotate_node(b);
	write(1, "rr\n", 3);
}
