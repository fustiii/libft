/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:46:53 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 22:03:17 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t				i;
	const unsigned char	*s;

	s = (const unsigned char *)str;
	i = 0;
	while (i < size)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
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
	char	cadena[] = "Como estas?";
	char	*resultado = ft_memchr(cadena, 'e', 8);

	if (resultado != NULL)
	{
		ft_putstr("Resultado: ");
		ft_putstr(resultado);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("No se ha encontrado carácter");
		ft_putchar('\n');
	}
	return (0);
}
*/
