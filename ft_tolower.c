/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:30 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:35:55 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*TOLOWER converts an upper-case letter to lower-case.
It returns the ASCII number of the corresponding lower-case if there is one. 
Otherwise, the return won't change.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
