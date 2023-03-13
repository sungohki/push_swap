/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:54:09 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/13 17:56:21 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_node(t_list *one, t_list *two)
// one에다가 two의 맨 위 노드를 하나 넘기는 함수
{
	t_list	*two_last;
	t_list	*two_last_2nd;

	if (ft_lstsize(two) == 0)
		return ;
	two_last_2nd = two;
	while (two_last_2nd->next->next != 0)
		two_last_2nd = two_last_2nd->next;
	two_last = two_last_2nd->next;
	ft_lstlast(one)->next = two_last;
	two_last_2nd->next = 0;
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
