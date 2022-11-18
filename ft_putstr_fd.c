/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:39:31 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 16:14:36 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PUTSTR_FD outputs the STR S to the given FILE DESCRIPTOR.
No return value.
Function Write allowed.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write (fd, &s[i++], 1);
}
