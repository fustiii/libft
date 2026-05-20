/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:49:31 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 22:07:31 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new_s;
	int		i;
	int		j;

	j = 0;
	while (s[j])
		j++;
	i = 0;
	new_s = malloc(sizeof(char) * (j + 1));
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = s[i];
		i++;
	}
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
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char s[] = "Hola que tal?";

	char	*res;
	res = ft_strdup(s);

	ft_putstr(res);
	ft_putchar('\n');

	free(res);
	return (0);
}
*/
