/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:39:55 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 21:22:31 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	if (siz > 0)
	{
		while (src[i] && i < siz - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Tuttibene";
	char	dst[20];
	ft_strlcpy(dst, str, 5);
	ft_putstr(dst);
	ft_putchar('\n');

	ft_strlcpy(dst, str, 15);
	ft_putstr(dst);
	ft_putchar('\n');
}
*/
