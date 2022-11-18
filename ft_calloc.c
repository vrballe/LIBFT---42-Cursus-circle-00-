/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:23 by vballe            #+#    #+#             */
/*   Updated: 2022/11/16 14:13:17 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CALLOC allocates space for
COUNT objects with respective SIZE of memory.
Turn all bytes of the allocated memory into 0.
That's why takes more time than MALLOC to work.
Return a pointer to allocated memory.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(count * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (count * size));
	return ((void *)dest);
}
