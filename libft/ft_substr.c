/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:49:51 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/04 17:01:23 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	size_t			i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		new_s = (char *)malloc(1);
		if (!new_s)
			return (NULL);
		new_s[0] = '\0';
		return (new_s);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len)
		new_s[i++] = s[start++];
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
	char	src[] = "Hola amigo";
	char	*res;
	res = ft_substr(src, 5, 5);

	ft_putstr(res);
	ft_putchar('\n');
}
*/
