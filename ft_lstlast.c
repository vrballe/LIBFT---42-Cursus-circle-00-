/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:17:52 by vballe            #+#    #+#             */
/*   Updated: 2022/11/16 18:07:28 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSTLAST returns the last node of the list.
*LST is the beginning of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}
