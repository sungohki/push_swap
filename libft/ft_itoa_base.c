/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:22:47 by sungohki          #+#    #+#             */
/*   Updated: 2023/02/06 12:45:13 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_positive(long n, int is_minus, char *base)
{
	char	*result;
	long	temp;
	int	len;
	int	base_len;

	len = 1 + is_minus;
	temp = (long) n;
	base_len = ft_strlen(base);
	while (temp / base_len > 0)
	{
		len++;
		temp = temp / base_len; 
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = 0;
	while (len--)
	{
		result[len] = base[n % base_len]
		n = n / base_len;
	}
	return (result);
}

char	*ft_itoa_base(int n, char *base)
{
	char	*result;

	if (n >= 0)
		result = ft_itoa_positive((long)n, 0, base);
	else
	{
		result = ft_itoa_positive(-(long)n, 1, base);
		if (result && result[0] == '0')
			result[0] = '-';
	}
	return (result);
}
