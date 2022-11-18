/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:08:05 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:33:09 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LSTADD_FRONT adds the node NEW at the BEGINNING of the list.
No return value.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
