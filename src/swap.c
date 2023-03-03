/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:43:26 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/03 18:22:01 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a)
{
	t_list		*temp;

	temp->next = a->next->next;
	a->next->next = a;
	a->next = temp->next;
}

void	sb(t_list *b)
{
	t_list		*temp;

	temp->next = b->next->next;
	b->next->next = b;
	b->next = temp->next;
}

void	ss(t_list *a, t_list *b)
{
	sa(a);
	sb(b);
}
