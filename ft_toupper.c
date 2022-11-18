/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:44:40 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:14:02 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*TOUPPER converts an lower-case letter to upper-case.
It returns the ASCII number of the corresponding upper-case if there is one. 
Otherwise, the return won't change.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
