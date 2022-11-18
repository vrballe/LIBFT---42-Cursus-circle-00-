/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:14 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:25:39 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* BZERO writes N bytes of ZEROS in the STR.
IF N = 0, the function does nothing.
Bzero does the same as memset,
but value is always 0. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
