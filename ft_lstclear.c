/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:03:52 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:23:40 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSTCLEAR deletes and frees given node and every successor.
Use DEL and FREE functions.
The pointer to the LIST must be set to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*successor;

	while (*lst)
	{
		(*lst)-> next = successor;
		ft_lstdelone(*lst, del);
		*lst = successor;
	}
	*lst = NULL;
}
