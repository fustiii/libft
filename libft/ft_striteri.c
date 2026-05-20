/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:51:37 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/04 16:04:42 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*
#include <stddef.h>
#include <unistd.h>

void	to_upper_if_odd(unsigned int i, char *c)
{
	if(i % 2 != 0 && *c >= 'a' && *c <= 'z')
		*c = *c -32;
}

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
	char	str[] = "Buenos dias";

	ft_striteri(str, to_upper_if_odd);
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
*/
