/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:02:40 by francios          #+#    #+#             */
/*   Updated: 2024/06/14 21:06:53 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// looking for a substring
// returns pointer to the start of needle in haystack

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;
	char	*src;
	char	*dest;

	src = (char *)haystack;
	dest = (char *)needle;
	if (*dest == '\0')
		return (src);
	i = 0;
	j = 0;
	while (src[i] && i < size)
	{
		j = 0;
		while (src[i + j] == dest[j] && i + j < size)
		{
			if (dest[j + 1] == '\0')
				return (src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
