/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:39:50 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:29:01 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* STRITERI executes the function F in all the characters of the STR.
It will be applied one by one, by the INDEX.
The INDEX will be the 1st argument of the function F.
Each character is passed by ADDRESS to function F to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
