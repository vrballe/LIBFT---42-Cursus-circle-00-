/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:43:47 by vballe            #+#    #+#             */
/*   Updated: 2022/11/17 11:58:45 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRNSTR locates the 1st occurence of 
\0 str NEEDLE in the string HAYSTACK.
Not more than LEN characters are searched.
If the \0 is after LEN = returns NULL. 
If characters are after a \0, they are not searched.
If NEEDLE is empty, returns HAYSTACK.
If there's no NEEDLE in the HAYSTACK, returns NULL.
If there is NEEDLE ocurrence in the HAYSTACK, returns a pointer to it's 1st char.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	check;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i <= len)
	{
		check = 0;
		while (haystack[i + check] == needle[check] && (i + check) < len)
		{
			check++;
			if (needle[check] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
