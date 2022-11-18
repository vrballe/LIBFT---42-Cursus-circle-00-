/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:38:12 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 17:31:28 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LSTNEW allocates (malloc) and returns a new node (element).
CONTENT variable is initialized with the value of the respective paramenter.
NEXT variable is initializes to NULL.
Returnes the new node.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
