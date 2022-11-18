/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:05 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:32:30 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISASCII tests for ASCII characters.
Checks between 0 and 0177 octal (= 127 decimal). 
Returns 1 if it's an ascii character and 0 if it's not.*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
