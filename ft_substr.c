/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:19 by vballe            #+#    #+#             */
/*   Updated: 2022/11/17 11:40:25 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SUBSTR allocates (malloc) 
Returns a substring from the string S.
The substring begins at the index START
The maximum size is LEN.
Returns the substring, or NULL if the allocation fails.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i_s;
	size_t	aux;

	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub || !s)
		return (NULL);
	i_s = 0;
	aux = 0;
	while (s[aux])
	{
		if (aux >= start && i_s < len)
			sub[i_s++] = s[aux];
		aux++;
	}
	sub[i_s] = '\0';
	return (sub);
}
