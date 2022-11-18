/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:41:44 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 17:25:28 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRJOIN allocates (malloc) 
Return a new string = concatenation os S1 and S2.
If the allocation fails, return NULL.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i_1;
	int		i_2;
	int		aux;
	char	*str;

	i_1 = 0;
	i_2 = 0;
	aux = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i_1])
		str[aux++] = s1[i_1++];
	while (s2[i_2])
		str[aux++] = s2[i_2++];
	str[aux] = '\0';
	return (str);
}
