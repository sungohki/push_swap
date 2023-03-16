/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:44:12 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/16 18:41:47 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

t_list	*push_swap(int argc, char *argv[]);
int		*error_check(int argc, char *argv[]);

void	init_stack(t_list *stack, int argc, int *arr);
int		set_pivot(t_list *ex, int range);
int		*atoi_arr(int argc, char *argv[]);
int		indexing_arr(int num, int *nodes);

void	sa(t_list *a);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);

void	pa(t_list *a, t_list *b);
void	pb(t_list *a, t_list *b);

void	ra(t_list *a);
void	rb(t_list *b);
void	rr(t_list *a, t_list *b);

void	rra(t_list *a);
void	rrb(t_list *b);
void	rrr(t_list *a, t_list *b);

#endif