/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:08:06 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 14:09:19 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSTSIZE counts number of nodes in a list.
Returns the length of the list.
*LST = the beginning of the list. 
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
