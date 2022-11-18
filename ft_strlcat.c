/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:41:57 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:44:03 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRLCAT concatenates SRC to the end of DST. 
Length = DSTSIZE - DSTLEN - 1 (NULL char). 
Returns = source + destination. Even when SRC is truncated. 
This allows truncation to be detected easily.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = 0;
	if (!dstsize || dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (src[srclen] && dstlen + 1 < dstsize)
	{
		dst[dstlen] = src[srclen];
		srclen++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (dstlen + ft_strlen(&src[srclen]));
}
