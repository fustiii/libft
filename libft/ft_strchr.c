/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:44:00 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 20:44:02 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
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
	char	*resultado = ft_strchr(cadena, 'e');

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
