/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:43:44 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 20:43:48 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
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
	char	letra = 'A';

	char	palabraori[] = "Original letter: ";
	ft_putstr(palabraori);
	ft_putchar(letra);
	ft_putchar('\n');

	char	palabralower[] = "Lower letter: ";
	ft_putstr(palabralower);
	char	lower = ft_tolower(letra);
	ft_putchar(lower);
	ft_putchar('\n');
}
*/
