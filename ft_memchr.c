/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:38:38 by vballe            #+#    #+#             */
/*   Updated: 2022/11/17 11:59:36 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*MEMCHR locates 1st occurence of a char.
In a finite size of memory.
STRCHR looks for the \0 character. MEMCHR does not.
It returns a pointer to the byte located.
Or NULL if there's no occurence in N bytes.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
