/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:40:20 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 17:27:22 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRMAPI run all chars of a STR.
In each char of this STR will executed the function F to create a NEW STR.
Arguments of function F: INDEX (1st one) and the originally STR (2nd one).
Need to allocate the LEN + 1 for the NEW STR (malloc).
Returns NULL if allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*new;

	i = 0;
	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
