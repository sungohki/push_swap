/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:44:12 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/06 21:24:30 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		error_check(int argc, char *argv[]);

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