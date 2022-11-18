/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vballe <vballe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:38:17 by vballe            #+#    #+#             */
/*   Updated: 2022/11/14 14:11:35 by vballe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PUTCHAR_FD outputs the CHAR C for the given FILE DESCRIPTOR.
No return value.
Function Write allowed.

FD identifies files. Standard files descriptors:
0 - input STDIN
1 - output STDOUT
2 - error STDERR
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
