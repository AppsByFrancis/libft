/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:02:40 by francios          #+#    #+#             */
/*   Updated: 2024/06/09 13:06:10 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// looking for a substring
// returns pointer to the start of needle in haystack

#include <stdio.h>
#include <string.h>

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
				return (src + i); // where the substring starts
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	src[] = "pepaahoj";
	char	dest[] = "ahoj";

	printf("%s", ft_strnstr(src, dest, 20));
	return (0);
} */
