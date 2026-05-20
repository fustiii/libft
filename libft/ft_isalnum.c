/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:37:27 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 21:08:35 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
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
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_check_and_print(int c, char index)
{
	if (ft_isalnum(c))
	{
		ft_putstr("Respuesta ");
		ft_putchar(index);
		ft_putstr(": ");
		ft_putchar(c);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("Res ");
		ft_putchar(index + '0');
		ft_putstr(" no es alnum\n");
	}
}

int	main(void)
{
	int	c1;
	int	c2;
	int	c3;
	int	c4;

	c1 = '2';
	c2 = '-';
	c3 = 'B';
	c4 = 't';

	ft_check_and_print(c1, '1');
	ft_check_and_print(c2, '2');
	ft_check_and_print(c3, '3');
	ft_check_and_print(c4, '4');

	return (0);
}
*/
