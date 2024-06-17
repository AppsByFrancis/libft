/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmajer <fmajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:43:43 by francios          #+#    #+#             */
/*   Updated: 2024/06/14 21:03:05 by fmajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if val < 0 - str 1 < str 2
// if val > 0 - str 1 > str 2
// if val = 0
// - str 1 = str 2 compares raw bytes which are interpreted from 0-255,
// compares even null terminated strings

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < size)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
