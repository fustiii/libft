/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:36:54 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 20:36:58 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	char	c1;
	char	c2;

	c1 = 'b';
	c2 = '7';	

	if (ft_isalpha(c1))
	{
		ft_putchar(c1);
		ft_putchar('\n');
	}
	if (ft_isalpha(c2))
	{
		ft_putchar(c2);
		ft_putchar('\n');
	}
}
*/
