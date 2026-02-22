/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibras <tibras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:34:39 by tibras            #+#    #+#             */
/*   Updated: 2025/11/18 13:53:43 by tibras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	to_find;
	unsigned char	*tmp;
	size_t			i;

	to_find = (unsigned char)c;
	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == to_find)
			return (tmp + i);
		i++;
	}
	return (NULL);
}
