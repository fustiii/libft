/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:40:16 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/04 20:02:18 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = 0;
	while (d_len < dstsize && dst[d_len])
		d_len++;
	if (d_len == dstsize)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && d_len + i + 1 < dstsize)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < dstsize)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
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
	ft_strlcat(dst, str, 5);
	ft_putstr(dst);
	ft_putchar('\n');

	ft_strlcat(dst, str, 15);
	ft_putstr(dst);
	ft_putchar('\n');
}
*/
