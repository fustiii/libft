/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:37:11 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 20:37:13 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	c1;
	int	c2;

	c1 = '6';
	c2 = 'a';
	if (ft_isdigit(c1))
	{
		ft_putchar(c1);
		ft_putchar('\n');
	}
	if (ft_isdigit(c2))
	{
		ft_putchar(c2);
		ft_putchar('\n');
	}
}
*/
