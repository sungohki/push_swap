/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:50:58 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/13 18:40:08 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*push_swap(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*nodes;

	if (argc <= 1)
		return (0);
	nodes = error_check(argc, argv);
	if (nodes == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	init_stack(stack_a, argc - 1, nodes);
	return (stack_a);
}
// argc는 1부터 시작, 노드 수는 argc - 1 개
// argv는 argv[1]부터 시작
