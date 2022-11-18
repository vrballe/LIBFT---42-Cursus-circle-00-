/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:40:33 by vballe            #+#    #+#             */
/*   Updated: 2022/11/18 13:32:59 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ITOA allocates (malloc) 
Returns the integer received as an argument converted in STRING.
Negative integers must be handled.
Returns NULL if allocation fail. */

#include "libft.h"

unsigned int	getlen(int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*makestr(char *str, unsigned int n, unsigned int len, int trigger)
{
	int	i;

	i = len - 1;
	str[i + 1] = '\0';
	str[i--] = (n % 10) + '0';
	n = n / 10;
	while (i >= 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (trigger == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	num;
	int				trigger;

	trigger = 1;
	len = getlen(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	num = (unsigned int)n;
	if (n < 0)
	{
		trigger = -1;
		num = (unsigned int)n * -1;
	}
	return (makestr(str, num, len, trigger));
}
