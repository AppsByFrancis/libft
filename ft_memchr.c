/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:09:07 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/08 01:26:59 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// returns pointer to the first occurence of the char converted to unsigned char in a string

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (*str == character)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", (char *)ft_memchr("aho", 'j', 4));
// }
