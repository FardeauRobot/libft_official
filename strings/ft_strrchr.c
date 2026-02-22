/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibras <tibras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:12:58 by tibras            #+#    #+#             */
/*   Updated: 2025/11/21 11:43:22 by tibras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	uc;

	len = (int)ft_strlen((char *)s);
	uc = (unsigned char)c;
	if (!uc)
		return ((char *)s + len);
	else if (s[0])
		len--;
	while (len >= 0)
	{
		if (s[len] == uc)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
