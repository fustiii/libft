/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:48:52 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 21:45:50 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
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

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int main(void)
{
	const char *s1 = "   +123";
	const char *s2 = "   -456";
	const char *s3 = "789abc";
	const char *s4 = "   +42";
	const char *s5 = "0";
	const char *s6 = "   -00123";

	ft_putstr("Input: \"   +123\" -> ");
	ft_putnbr(ft_atoi(s1));
	ft_putchar('\n');

	ft_putstr("Input: \"   -456\" -> ");
	ft_putnbr(ft_atoi(s2));
	ft_putchar('\n');

	ft_putstr("Input: \"789abc\" -> ");
	ft_putnbr(ft_atoi(s3));
	ft_putchar('\n');

	ft_putstr("Input: \"   +42\" -> ");
	ft_putnbr(ft_atoi(s4));
	ft_putchar('\n');

	ft_putstr("Input: \"0\" -> ");
	ft_putnbr(ft_atoi(s5));
	ft_putchar('\n');

	ft_putstr("Input: \"   -00123\" -> ");
	ft_putnbr(ft_atoi(s6));
	ft_putchar('\n');

	return (0);
}
*/
