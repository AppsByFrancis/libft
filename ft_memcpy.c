/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francios <francios@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:03:23 by fmajer            #+#    #+#             */
/*   Updated: 2024/06/09 23:02:53 by francios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies n size of string to destination

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/* int main ()
{
	char src[] = "this ist the string";
	char dest[50];

	ft_memcpy(dest, src, 8);

	dest[8] = '\0';

	printf("%s", dest);
	return (0);
} */
