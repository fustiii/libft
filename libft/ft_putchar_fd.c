/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:51:55 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 20:52:03 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;
	fd = open("pruebafd.txt", 'a', 1);
	if (fd < 0)
		return 1;

	close(fd);
	return (0);

	return (0);
}
*/
