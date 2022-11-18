/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:42:24 by vballe            #+#    #+#             */
/*   Updated: 2022/11/16 11:49:17 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* STRLCPY copies (destsize - 1) from src to dest
(space for the NUL char \0)
Add /0. 
Returns src len, whether if there was enough lenght space or not.*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
