/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:41:02 by vballe            #+#    #+#             */
/*   Updated: 2022/11/17 12:00:03 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRCHR locates 1st char in a STR
(even the terminating null char).
Returns a pointer to the located character,
Or NULL if there's no occurence.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
