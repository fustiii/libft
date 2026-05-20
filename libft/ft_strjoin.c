/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:50:10 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/04 17:32:20 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (*s2)
		new_s[i++] = *s2++;
	new_s[i] = '\0';
	return (new_s);
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
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	s1[] = "¿Hola, ";
	char	s2[] = "como estas?
	char	*res;
	res = ft_strjoin(s1, s2);

	ft_putstr(res);
	ft_putchar('\n');
}
*/
