/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:20 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:15:45 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MEMMOVE copies LEN bytes 
from object src to object dest. 
If dest or src = null pointer, returns NULL.
If the destination is above the source, we copy
backwards to avoid overwriting the data we want to
copy.
      dest:       dddddddd
      src:    ssssssss   ^
              |   ^  |___|
              |___|
If the destination is below the source, we copy forward.
      dest:   dddddddd
      src:    ^   ssssssss
              |___|  ^   |
                     |___|
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if ((size_t)dst > (size_t)src)
	{
		i = len;
		while (i--)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
