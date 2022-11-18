/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:41:11 by vballe            #+#    #+#             */
/*   Updated: 2022/11/15 14:41:20 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRDUP allocates sufficient memory for a copy of the string S1
Afterwards, does the copy and returns a pointer to it. 
The pointer may be used as an argument to the function free.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		cpy;
	int		i;

	cpy = 0;
	i = 0;
	copy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (s1[i])
		copy[cpy++] = s1[i++];
	copy[i] = '\0';
	return ((char *)copy);
}
