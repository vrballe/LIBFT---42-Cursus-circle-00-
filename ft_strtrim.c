/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:08:00 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 14:04:56 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* STRTRIM allocates (malloc) and returns a copy of STRING S1.
Will be REMOVED the CHARS of STRING SET from the BEGINNING and the END of S1.
If the allocation fails, returns NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;

	end = ft_strlen (s1) - 1;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr (set, s1[start]))
		start++;
	while (end > start && ft_strchr (set, s1[end]))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
