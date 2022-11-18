/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:37:17 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:36:27 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISDIGIT tests a decimal digit character. 
If it is true, returns 1. 
Else, returns 0. */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
