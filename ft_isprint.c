/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:30 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:21:36 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISPRINT tests printable characters, including space. 
Returns 0 if it's non printable and 1 if it's printable. */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
