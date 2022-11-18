/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:43:34 by vballe            #+#    #+#             */
/*   Updated: 2022/11/15 11:35:32 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRNCMP compares N characters of S1 and S2
Until the null terminator char \0.
Return values: 
> 0 if S1 is greater than S2 
= 0 if S1 is equal to S2
< 0 is S1 is smaller than S2.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n > 1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
