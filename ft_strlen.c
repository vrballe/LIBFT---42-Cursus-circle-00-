/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:42:34 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:29:17 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* STRLEN computes the lenght of the string.
Returns the number of characters that come before the NULL terminator one \0. */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
