/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:38:28 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:46:49 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PUTENDL_FD outputs the STR S to the given FILE DESCRIPTOR.
Add a NEW LINE.
No return value.
Function WRITE allowed.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write (fd, &s[i++], 1);
	write (fd, "\n", 1);
}
