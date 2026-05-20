/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfuster <gfuster@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 20:49:09 by gfuster           #+#    #+#             */
/*   Updated: 2025/06/03 22:06:02 by gfuster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp_ptr;

	tmp_ptr = malloc(count * size);
	if (!tmp_ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp_ptr[i] = 0;
		i++;
	}
	return ((void *)tmp_ptr);
}
