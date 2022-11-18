/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:37 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:54:33 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISALNUM tests if ISALPHA or ISDIGIT is true
If TRUE returns 1. 
Else, returns 0. */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
