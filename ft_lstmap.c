/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:13:45 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:28:26 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSTMAP iterates the LIST.
Applies function F on CONTENT of each NODE.
Creates a NEW LIST as a result of the successive applications of function F.
DEL function is used to delete the content of a node if needed.
Functions allowed: MALLOC and FREE
Returns the NEW LIST. And NULL if the allocation fails.
LST = address of a pointer to a node.
F = address of the function.
DEL = address of the delete function.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next_node;

	new_list = NULL;
	while (lst)
	{
		if (!(next_node == ft_lstnew(f(lst -> content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, next_node);
		lst = lst -> next;
	}
	return (new_list);
}
