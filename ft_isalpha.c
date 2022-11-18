/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:50 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:47:13 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISALPHA tests a character. 
If it is ALPHABETIC (upper or lower), returns 1. 
Else, returns 0. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
