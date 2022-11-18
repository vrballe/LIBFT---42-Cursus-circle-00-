/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:04:25 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 15:39:51 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSTDELONE takes a NODE as a parameter and frees MEM of node's CONTENT.
Function DEL given as a parameter will be used to free node's content.
NEXT memory of the node must NOT be freed.
Functions allowed = FREE.
No return.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(list -> content);
	free (lst);
}
