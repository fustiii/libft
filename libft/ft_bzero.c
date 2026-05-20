/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:39:07 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 21:18:33 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_print_bytes(const char *s, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] == 0)
			ft_putchar('.');
		else
			ft_putchar(s[i]);
	}
	ft_putchar('\n');
}

int	main(void)
{

	char	str[20] = "Hola, buenos dias!";
	ft_bzero(str, 5);

	ft_print_bytes(str, 20);

	return (0);
}
*/
