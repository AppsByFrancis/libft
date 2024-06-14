/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:01:00 by francios          #+#    #+#             */
/*   Updated: 2024/06/08 23:01:29 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

// copies n size of src string to dest, if size is bigger than dest
// Always leaves space for null terminator

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[count] && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	char	dest[10];
	char	src[] = "pepass";

	printf("%zu", ft_strlcpy(dest, src, 6));
	printf("%c", '\n');
	printf("%s", dest);
	return (0);
}
 */
