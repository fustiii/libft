/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:51:21 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/04 15:19:16 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*new_s;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
size_t	ft_strlen(const char *str)
{
	size_t	con;
	con = 0;
	
	while (str[con] != '\0')
	{
		con++;
	}
	return (con);
}

char	to_upper_if_odd(unsigned int i, char c)
{
	if(i % 2 != 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

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
	char	*res;
	res = ft_strmapi("Buenos dias", to_upper_if_odd);
	ft_putstr(res);
	ft_putchar('\n');
}
*/
