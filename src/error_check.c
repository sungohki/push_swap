/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:42:31 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/06 19:14:35 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_integer(char *argv)
{
	int		temp;
	char	temp_to_char;
	int		result;

	temp = ft_atoi(argv);
	temp_to_char = ft_itoa(temp);
	if (argv[0] == '+')
		result = ft_strncmp((argv + 1), temp_to_char, ft_strlen(argv + 1));
	else
		result = ft_strncmp(argv, temp_to_char, ft_strlen(argv));
	free(temp_to_char);
	if (result == 0)
		return (1);
	else
		return (0);
}

static int	is_numeric(char *argv)
{
	int		index;
	int		temp;

	index = 0;
	temp = atoi(argv);
	if (temp == 0)
	{
		if (ft_strncmp(argv, "0", 1) != 0)
			return (0);
		else if (ft_strncmp(argv, "+0", 2) != 0)
			return (0);
		else if (ft_strncmp(argv, "-0", 2) != 0)
			return (0);
	}
	return (1);
}

int	error_check(int argc, char *argv[])
{
	int		index;
	char	*argv_num;

	if (argc <= 1)
		return (1);
	index = 1;
	while (index <= (argc - 1))
	{
		if (is_numeric(argv[index]) == 0)
			return (1);
		if (is_integer(argv[index]) == 0)
			return (1);
	}
	return (0);
}
