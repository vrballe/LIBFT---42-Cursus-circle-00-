/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:01 by vballe            #+#    #+#             */
/*   Updated: 2022/11/16 18:29:10 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRRCHR locates the last occurence of a char in a STR
(even the terminating null char).
It returns a pointer to the located character,
or NULL if there's no occurence.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	start;

	start = ft_strlen(s);
	while (start >= 0)
	{
		if (s[start] == (char)c)
			return ((char *)&s[start]);
		start--;
	}	
	return (NULL);
}
