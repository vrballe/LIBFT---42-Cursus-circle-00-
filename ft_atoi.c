/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:35:40 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:45:42 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ATOI converts a string ASCII to integers.
Ignores WHITE SPACES at the START of the string.
Ignores '+' when at the start or after a sequence of white spaces.
Same with '-'.
Not numbers or not the ignored characters, ATOI will not convert.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	val;

	i = 0;
	n = 0;
	val = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			val *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * val);
}
