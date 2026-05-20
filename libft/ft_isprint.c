/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:38:20 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 21:10:21 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	if (ft_isprint(c))
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
		ft_putstr(" no es print\n");
	}
}

int	main(void)
{
	int	c1;
	int	c2;
	int	c3;
	int	c4;

	c1 = '2';
	c2 = 200;
	c3 = 'B';
	c4 = 250;

	ft_check_and_print(c1, '1');
	ft_check_and_print(c2, '2');
	ft_check_and_print(c3, '3');
	ft_check_and_print(c4, '4');

	return (0);
}
*/
