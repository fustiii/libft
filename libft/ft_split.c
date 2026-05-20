/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:50:46 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/04 16:46:47 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

int	count_words(const char *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

char	*copy_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

void	free_split(char **res, int w)
{
	while (w--)
		free(res[w]);
	free(res);
}

int	fill_result(char **res, const char *s, char c)
{
	int	i;
	int	w;
	int	start;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[w] = copy_word(s, start, i);
			if (!res[w])
				return (free_split(res, w), 0);
			w++;
		}
	}
	res[w] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		num;

	if (!s)
		return (NULL);
	num = count_words(s, c);
	res = malloc(sizeof(char *) * (num + 1));
	if (!res)
		return (NULL);
	if (!fill_result(res, s, c))
		return (NULL);
	return (res);
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
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	**result;
	char	*input = "madrid,,barcelona,bilbao";
	char	sep = ',';
	int	i = 0;

	result = ft_split(input, sep);
	if (!result)
		return (1);

	while (result[i])
	{
		ft_putstr(result[i]);
		ft_putchar('\n');
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
