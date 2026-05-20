/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:39:37 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 21:21:26 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_ptr_dst;
	char	*tmp_ptr_src;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tmp_ptr_src = (char *) src;
	tmp_ptr_dst = (char *) dst;
	i = 0;
	if (tmp_ptr_dst > tmp_ptr_src)
	{
		while (len-- > 0)
		{
			tmp_ptr_dst[len] = tmp_ptr_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			tmp_ptr_dst[i] = tmp_ptr_src[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Abecedario";
	ft_putstr(str);
	ft_putchar('\n');
	ft_memmove(str + 2, str, 4);
	ft_putstr(str);
	ft_putchar('\n');
}
*/
