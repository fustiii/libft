/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:50:31 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/04 17:24:30 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new_s = (char *)malloc(sizeof(char) * (end - start + 1 + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		new_s[i++] = s1[start++];
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
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	str[] = "aleMi nombre es Guillemale";
	char	trim[] = "ale";
	char	*res;
	res = ft_strtrim(str, trim);

	ft_putstr(res);
	ft_putchar('\n');
}
*/
