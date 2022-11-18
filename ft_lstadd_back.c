/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:22:22 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:37:22 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSTADD_BACK adds a node NEW at the END of the list.
Parameters: (lst) address of a pointer to the 1st link of the list.
            (new) address of a pointer to the node to be added.
No return.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	last_node -> next = new;
	new -> next = NULL;
}
