/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibras <tibras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:14:11 by tibras            #+#    #+#             */
/*   Updated: 2025/11/13 12:31:58 by tibras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*tmp1;
	char	*tmp2;

	if (n <= 0)
		return (0);
	i = 0;
	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i])
			return ((unsigned char)tmp1[i] - (unsigned char)tmp2[i]);
		i++;
	}
	return (0);
}
