/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:47:33 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 21:44:14 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j]
			&& i + j < len
			&& haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *) haystack + i);
		i++;
	}
	return (0);
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
		ft_putchar (str[i]);
		i++;
	}
}

int	main(void)
{
	char	cadena1[] = "Como estas?";
	char	cadena2[] = "estas";
	char	*res = ft_strnstr(cadena1, cadena2, 10);

	if (res)
	{
		ft_putstr("Resultado: ");
		ft_putstr(res);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("No se ha encontrado cadena");
		ft_putchar('\n');
	}
	return (0);
}
*/
