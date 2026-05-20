/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:43:22 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 20:43:25 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
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
	char	letra = 'a';

	char	palabraori[] = "Original letter: ";
	ft_putstr(palabraori);
	ft_putchar(letra);
	ft_putchar('\n');

	char	palabraupper[] = "Upper letter: ";
	ft_putstr(palabraupper);
	char	upper = ft_toupper(letra);
	ft_putchar(upper);
	ft_putchar('\n');
}
*/
