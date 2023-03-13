/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 17:42:31 by sungohki          #+#    #+#             */
/*   Updated: 2023/03/13 18:50:28 by sungohki         ###   ########.fr       */
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
// 정수 범위 내의 정수를 표현하는 문자열 인지 판별 -> 0 : 정수 아님 1: 정수임
// atoi 이후 바로 itoa를 통해서 동일한 지 비교

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
// argv가 숫자를 표현하는 문자열 인지 판별 -> 0 : 숫자 아님 1 : 숫자임
// atoi 결과가 0일 때, argv가 진짜 "0"이어서 0인지 비교

int	*error_check(int argc, char *argv[])
{
	int		index;
	int		*nodes;

	index = 1;
	while (index <= (argc - 1))
	{
		if (is_numeric(argv[index]) == 0)
			return (0);
		if (is_integer(argv[index]) == 0)
			return (0);
	}
	nodes = atoi_arr(argc - 1, argv);
	if (indexing_arr(argc - 1, nodes) == 0)
	{
		free(nodes);
		return (0);
	}
	return (nodes);
}
